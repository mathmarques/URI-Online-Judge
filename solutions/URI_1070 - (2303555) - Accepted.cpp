#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int val, q;

    while(cin >> val){
    	q = 0;

    	do{
    		if(val%2 != 0){
    			cout << val << endl;
    			q++;
    		}
    		val++;
    	}while(q != 6);
	}    
     
    return 0;
}