#include <iostream>
#include <cmath>
using namespace std;
 
int main(int argc, const char * argv[])
{
    int x, y, z;

    while(cin >> x >> y >> z){
    	
    	if(x < y)
    		if(x < z)
    			if(y < z)
    				cout << x << endl << y << endl << z << endl;
    			else
    				cout << x << endl << z << endl << y << endl;
    		else
    			cout << z << endl << x << endl << y << endl;
    	else
    		if(y < z)
    			if(x < z)
    				cout << y << endl << x << endl << z << endl;
    			else
    				cout << y << endl << z << endl << x << endl;
    		else
    			cout << z << endl << y << endl << x << endl;

    	cout << endl << x << endl << y << endl << z << endl;
  
    }
     
    return 0;
}