#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int T, i;
    string str;

    cin >> T;
	getline(cin, str);

    for(; T > 0; T--){
    	getline(cin, str);

    	for(char &c: str)
    		if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    			c += 3;

    	reverse(str.begin(), str.end());

    	for(i = trunc(str.length()/2.0); i < str.length(); i++)
    		str[i]--;

    	cout << str << endl;
    }

    return 0;
}