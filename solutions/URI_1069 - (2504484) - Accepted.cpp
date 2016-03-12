#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int T, open, total;
    string str;

    cin >> T;
    getline(cin, str);

    for(; T > 0; T--){
    	getline(cin, str);
    	open = 0;
    	total = 0;

    	for(char c: str)
    		if(c == '<')
    			open++;
    		else if(c == '>' && open > 0){
    			total++;
    			open--;
    		}

    	cout << total << endl;

    }

    return 0;
}