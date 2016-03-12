#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    string A;
    double B, C;
    
        cout.precision(2);

    while(cin >> A >> B >> C) {
        cout << "TOTAL = R$ " << fixed << B+(C*0.15) << endl;
    }
      
    return 0;
}