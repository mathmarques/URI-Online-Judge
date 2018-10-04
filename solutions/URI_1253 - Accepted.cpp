#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int num, casas, letra;
    string lido;
    char linha[50], saida[50];

    cin >> num;
    for(int i=0;i<num;i++){
        cin.get();
        getline(cin, lido);
        cin >> casas;
        for(int f=0;f<lido.size();f++){
            linha[f] = lido[f];
        }
        for(int g=0; g<lido.size(); g++){
            if(linha[g] - casas < 'A'){
                letra = linha[g] - casas;
                letra = 64 - letra;
                saida[g] = 'Z' - letra;
            }
            else saida[g] = linha[g] - casas;
        }
        for(int h=0; h<lido.size();h++)
            cout << saida[h];

        cout << endl;
    }

    return 0;
}
