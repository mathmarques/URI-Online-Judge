#include <iostream>
#include <cmath>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, y;
    
    while(cin >> x >> y) {
    	if(max(x,y)%min(x,y) == 0)
    		cout << "Sao Multiplos" << endl;
    	else 
    		cout << "Nao sao Multiplos" << endl;
    }
      
    return 0;
}