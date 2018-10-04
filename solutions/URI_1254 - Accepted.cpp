#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    string original, substit, cod, saida;
    int conta;
    bool tag, troca;

    while(cin >> original >> substit){
        cin.get();
        getline(cin, cod);
        tag = false;
        saida = "";
        for(int i=0;i<cod.size();i++){

            if(cod[i] == '<') tag = true;
            else if(cod[i] == '>') tag = false;

            if(tag){
                troca = false;
                if(tolower(cod[i]) == tolower(original[0])){
                    conta = 0;
                    for(int f=0;f<original.size();f++){
                        if(tolower(cod[i+f]) == tolower(original[f])){
                            troca = true;
                            conta++;
                        }
                        else{
                            troca = false;
                            break;
                        }
                    }
                }
                if(troca){
                    saida = saida + substit;
                    i += original.size()-1;
                }
                else saida = saida + cod[i];
            }
            else saida = saida + cod[i];
        }
        cout << saida << endl;
    }

    return 0;
}
