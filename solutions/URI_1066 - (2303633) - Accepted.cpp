#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i, val, par = 0, impar = 0, positivo = 0, negativo = 0;
    
    for(i = 0; i < 5; i++) {
        cin >> val;
        if(val%2 == 0)
            par++;
        else
        	impar++;

        if(val > 0)
        	positivo++;
        else if(val < 0)
        	negativo++;
    }
 
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
      
    return 0;
}