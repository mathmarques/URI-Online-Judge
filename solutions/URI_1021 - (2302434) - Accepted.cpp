#include <iostream>
#include <cmath>

using namespace std;
 
int main(int argc, const char * argv[])
{
    double notas[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    double N;
    cout.precision(2);

    while(cin >> N){
        cout << "NOTAS:" << endl;
        for(int i = 0; i < 6; i++){
            cout << (int)(N/notas[i]) << " nota(s) de R$ "<< fixed << notas[i] << endl;
            N = fmod(N,notas[i]);
        }

        cout << "MOEDAS:" << endl;
        for(int i = 0; i < 6; i++){
            cout << (int)(N/moedas[i]) << " moeda(s) de R$ "<< fixed << moedas[i] << endl;
            N = fmod(N,moedas[i]);
        }
    }
     
    return 0;
}