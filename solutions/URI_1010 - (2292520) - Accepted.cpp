#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int A, B, D, E;
    double C, F;
    
    cout.precision(2);

    while(cin >> A >> B >> C >> D >> E >> F) {
        cout << "VALOR A PAGAR: R$ " << fixed << (B*C)+(E*F) << endl;
    }
      
    return 0;
}