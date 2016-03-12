#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int N;
    
    while(cin >> N) {
    	if(N != 0) {
	    	while(N > 1) {
	    		cout << "Ho ";
	    		N--;
	    	}
	    	cout << "Ho!";
    	}
    	cout << endl;
    }
      
    return 0;
}