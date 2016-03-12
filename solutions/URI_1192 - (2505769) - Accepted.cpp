#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
	int T, a, b;
	char c;
 	
 	cin >> T;
 	for(;T > 0; T--){
 		cin >> a >> c >> b;

 		if(a == b)
 			cout << a*b << endl;
 		else if(c >= 97 && c <= 122)
 			cout << a+b << endl;
 		else
 			cout << b-a << endl;
 	}

    return 0;
}