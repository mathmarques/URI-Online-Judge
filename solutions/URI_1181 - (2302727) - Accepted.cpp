#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    int l, i, j;
    char op;
   	double read, result;
   	cout.precision(1);
   	
    while(cin >> l >> op){
    	result = 0.0;
    	for(i = 0; i < 12; i++)
    		for(j = 0; j < 12; j++) {
    			cin >> read;
    			if(l == i)
    				result += read;
    		}

    	if(op == 'M')
    		result /= 12.0;
    	
    	cout << fixed << result << endl;
    	
    }
     
    return 0;
}