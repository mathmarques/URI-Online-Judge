#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, const char * argv[])
{
	unsigned long long N, num;
	string seq = "ABCD";
	string out = "";
	
	while(cin >> N && N != 0){
		num = N*N;
		out = "";
		do {
			out.insert(out.begin(), seq[(num%4)]);
			num = num/4;
		} while(num != 0);

		cout << out << endl;
	}

    return 0;
}