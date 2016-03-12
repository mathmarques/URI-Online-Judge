#include <iostream>
#include <vector>

using namespace std;
 
int main(int argc, const char * argv[])
{
	int T, i, j, n, k;
	vector<int> list;
 	
 	cin >> T;
 	for(i = 1; i <= T; i++){
 		cin >> n >> k;

 		list.clear();
 		for(j = 1; j <= n; j++)
 			list.push_back(j);

 		j = (k-1)%n;

 		for(; list.size() > 1; j = (j+(k-1))%list.size())
 			list.erase(list.begin() + j);

 		cout << "Case "<< i <<": " << list.at(0) << endl;

 	}

    return 0;
}