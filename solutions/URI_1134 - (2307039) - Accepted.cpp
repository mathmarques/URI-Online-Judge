#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    long int op, a = 0, g = 0, d = 0;

    while(1) {
        do {
            cin >> op;
        } while (op < 1 && op > 4);

        if(op == 4)
            break;

        switch(op){
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
        }

    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;


    return 0;
}