#include <iostream>
#include <iomanip>

using namespace std;

long long unsigned fat(int n){
    return(n <= 1 ? n : n*fat(n-1));
}

int main(int argc, const char * argv[])
{
    long long unsigned vet[21];
    int a, b;
    cout.precision(20);

    vet[0] = 1;
    vet[1] = 1;
    vet[2] = 2;
    vet[3] = 6;
    vet[4] = 24;
    vet[5] = 120;
    vet[6] = 720;
    vet[7] = 5040;
    vet[8] = 40320;
    vet[9] = 362880;
    vet[10] = 3628800;
    vet[11] = 39916800;
    vet[12] = 479001600;
    vet[13] = 6227020800;
    vet[14] = 87178291200;
    vet[15] = 1307674368000;
    vet[16] = 20922789888000;
    vet[17] = 355687428096000;
    vet[18] = 6402373705728000;
    vet[19] = 121645100408832000;
    vet[20] = 2432902008176640000;

    while(cin >> a >> b){
        cout << vet[a] + vet[b] << endl;
    }

    return 0;
}