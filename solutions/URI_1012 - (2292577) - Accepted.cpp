#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    double A, B, C;
    
    cout.precision(3);

    while(cin >> A >> B >> C) {
        cout << "TRIANGULO: " << fixed << (A*C)/2.0 << endl;
        cout << "CIRCULO: " << fixed << 3.14159*C*C << endl;
        cout << "TRAPEZIO: " << fixed << ((A+B)*C)/2.0 << endl;
        cout << "QUADRADO: " << fixed << B*B << endl;
        cout << "RETANGULO: " << fixed << A*B << endl;
    }
      
    return 0;
}