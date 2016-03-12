#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int L, i, read, max;

    while(cin >> L){
	    for(i = 0; i < L; i++) {
	    	cin >> read;
	    	if(i == 0 || read > max)
	    		max = read;
	    }

	    if(max < 10)
	    	cout << "1" << endl;
	    else if(max < 20)
	    	cout << "2" << endl;
	    else 
	    	cout << "3" << endl;


	    
	}    
     
    return 0;
}