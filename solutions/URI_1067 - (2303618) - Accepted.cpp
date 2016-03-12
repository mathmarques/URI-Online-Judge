#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i, val;
    while(cin >> val) {
	    for(i = 1; i <= val; i++) {
	        if(i%2 != 0)
	            cout << i << endl;
	    }
	}
       
    return 0;
}