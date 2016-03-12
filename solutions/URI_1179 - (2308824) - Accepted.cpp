#include <iostream>
 
using namespace std;
 
void imprime(int vet[], int pointer, bool par){
    int i, offset = (int)((pointer-1)/5)*5;

    for(i = offset; i < pointer; i++){
        cout << (par? "par":"impar") << "["<< i-offset <<"] = " << vet[i] << endl;
    }
    
}

int main(int argc, const char * argv[])
{
    int par[15], impar[15], pa = 0, im = 0, i, n;

    for(i = 0; i < 15; i++) {
        cin >> n;
        if(n%2 == 0) {
            par[pa] = n;
            pa++;
            if(pa%5 == 0)
                imprime(par, pa, true);
        } else {
            impar[im] = n;
            im++;
            if(im%5 == 0)
                imprime(impar, im, false);
        }
    }

    imprime(impar, im, false);
    imprime(par, pa, true);
 
    return 0;
}