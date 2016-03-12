#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int q, op;
    double n, sum;
    cout.precision(2);

    while(1) {
        q = 0;
        sum = 0;
        do{
            cin >> n;
            if(n >= 0 && n <= 10){
                sum += n;
                q++;
            } else
                cout << "nota invalida" << endl;

        } while(q < 2);

        cout << "media = " << fixed << sum/2.0 << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
        }while(cin >> op && !(op == 1 || op == 2));

        if(op == 2)
            break;
    }

    return 0;
}