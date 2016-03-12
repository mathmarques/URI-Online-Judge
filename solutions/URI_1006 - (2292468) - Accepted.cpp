#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    double A, B, C;
     
    cout.precision(1);
 
    while(cin >> A >> B >> C)
        cout << "MEDIA = " << fixed << ((2*A)+(3*B)+(5*C))/10.0 << endl;
      
    return 0;
}