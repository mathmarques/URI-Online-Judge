#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    double x, y;

    while(cin >> x >> y){
    	if(x == 0.0 && y == 0.0)
    		cout << "Origem" << endl;
    	else if(x == 0.0)
    		cout << "Eixo Y" << endl;
    	else if( y == 0.0 )
    		cout << "Eixo X" << endl;
    	else {
	    	if(x > 0) {
	    		if(y > 0)
	    			cout << "Q1" << endl;
	    		else if (y < 0)
	    			cout << "Q4" << endl;
	    	} else {
	    		if(y > 0)
	    			cout << "Q2" << endl;
	    		else if (y < 0)
	    			cout << "Q3" << endl;
	    	}
    	}
  
    }
     
    return 0;
}