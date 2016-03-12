#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    double raio;
    
    cout.precision(3);

    while(cin >> raio) {
        cout << "VOLUME = " << fixed << (4/3.0)*3.14159*raio*raio*raio << endl;
    }
      
    return 0;
}