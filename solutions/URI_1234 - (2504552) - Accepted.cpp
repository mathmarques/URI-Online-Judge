#include <iostream>
#include <string>

using namespace std;
 
int main(int argc, const char * argv[])
{
    string str;
    bool up;

    while(getline(cin, str)){
    	up = true;
    	for(char &c: str){
    		if(c == ' ')
    			continue;

    		if(up && c >= 97)
    			c -= 32;
    		else if(!up && c <= 90)
    			c += 32;

    		up = !up;
    	}

    	cout << str << endl;
    }
 
    return 0;
}