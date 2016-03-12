#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int T = 1, offset, m, f;
    string search, find;

    while(getline(cin, search)){
    	m = 0;
    	f = 0;
    	getline(cin, find);

    	for(offset = 0; offset < find.length(); offset += 5){
    		if(find[offset] == search[0] && find[offset+1] == search[1]){
    			if(find[offset+3] == 'F')
    				f++;
    			else
    				m++;
    		}
    	}

    	if(T != 1)
    		cout << endl;
    	cout << "Caso "<< T <<":" << endl;
    	cout << "Pares Iguais: " << m+f << endl;
    	cout << "F: " << f << endl;
    	cout << "M: " << m << endl;

    	T++;
    }

    return 0;
}