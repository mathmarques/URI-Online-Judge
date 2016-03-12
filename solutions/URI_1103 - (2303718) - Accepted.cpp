#include <iostream>
 
using namespace std;
  
int main(int argc, const char * argv[])
{
    int a, b, c, d, i, min;
 
    while(cin >> a >> b >> c >> d){
 		if(a == 0 && b == 0 && c == 0 && d == 0)
 			break;
 		
        a = a*60 + b;
        c = c*60 + d;
 
        min = 1;
        for(i = (a+1)%1440; i != c; i = (i+1)%1440)
            min++;
 
        cout << min << endl;
 
    }
      
    return 0;
}