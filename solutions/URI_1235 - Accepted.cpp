#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int num, tam;
    string msg, inicio, fim;

    cin >> num;
    cin.get();
    for(int i=0;i<num;i++){
        inicio = "";
        fim = "";
        getline(cin, msg);
        tam = msg.size()/2;
        for(int f=0;f<tam;f++){
            inicio = msg[f] + inicio;
        }
        for(int f=tam;f<msg.size();f++){
            fim = msg[f] + fim;
        }
        cout << inicio << fim << endl;
    }

    return 0;
}
