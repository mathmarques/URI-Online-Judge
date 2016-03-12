#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    double A, B;
     
    cout.precision(5);
 
    while(cin >> A >> B)
        cout << "MEDIA = " << fixed << ((3.5*A)+(7.5*B))/11.0 << endl;
      
    return 0;
}