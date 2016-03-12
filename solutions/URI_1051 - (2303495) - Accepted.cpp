#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    double sal, total;
    cout.precision(2);
    while(cin >> sal){
    	
    	sal -= 2000.00;
    	if(sal > 0) {
    		if(sal > 1000){
    			sal -= 1000.00;
    			if(sal > 1500) {
    				sal -= 1500.00;
    				total = 1000*0.08+1500*0.18+sal*0.28;
    			} else
    				total = 1000*0.08+sal*0.18;
    		} else
    			total = sal*0.08;


    		cout << "R$ " << fixed << total << endl;
    	} else
    		cout << "Isento" << endl;
	}    
     
    return 0;
}