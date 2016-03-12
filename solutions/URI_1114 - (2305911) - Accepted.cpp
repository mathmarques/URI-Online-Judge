#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int a;

    while(cin >> a && a != 2002) {
        cout << "Senha Invalida" << endl;
    }

    cout << "Acesso Permitido" << endl;
    
    return 0;
}