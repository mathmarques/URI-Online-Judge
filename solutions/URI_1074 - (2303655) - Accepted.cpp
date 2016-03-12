#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int N, i;
    long int numb;
    
    cin >> N;

    for(i = 0; i < N; i++) {
        cin >> numb;
        if(numb != 0 ){
	        if(numb%2 == 0)
	            cout << "EVEN";
	        else
	        	cout << "ODD";

	        if(numb > 0)
	       		cout << " POSITIVE" << endl;
	        else
	        	cout << " NEGATIVE" << endl;
    	} else
    		cout << "NULL" << endl;
    }

    return 0;
}