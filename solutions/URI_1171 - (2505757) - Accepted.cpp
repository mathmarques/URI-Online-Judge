#include <iostream>
#include <vector>

using namespace std;
 
int main(int argc, const char * argv[])
{
	int T, n, i;
    vector<int> vet(2001, 0);
 	
 	cin >> T;
 	for(;T > 0; T--){
 		cin >> n;
 		vet.at(n)++;
 	}

 	for(i = 1; i <= 2000; i++)
 		if(vet.at(i) != 0)
 			cout << i << " aparece "<< vet.at(i) <<" vez(es)" << endl;
    return 0;
}