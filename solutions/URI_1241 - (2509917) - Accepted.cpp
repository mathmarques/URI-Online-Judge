#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, const char * argv[])
{
	int T, i;
	string str, match;
 	
 	cin >> T;
 	getline(cin, str);
 	for(;T > 0; T--){
 		getline(cin, str, ' ');
 		getline(cin, match);

 		if(match.length() > str.length() || str.substr(str.length()-match.length()) != match)
 			cout << "nao encaixa" << endl;
 		else
 			cout << "encaixa" << endl;
 	}

    return 0;
}