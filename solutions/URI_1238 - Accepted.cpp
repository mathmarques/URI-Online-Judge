#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int num, tam1, tam2, tam;
    string cadeia1, cadeia2, palavra, linha;

    cin >> num;
    cin.get();
    for(int i=0;i<num;i++){
        palavra = "";
        getline(cin, linha);
        stringstream cadeia(linha);
        cadeia >> cadeia1 >> cadeia2;
        tam = cadeia1.size() + cadeia2.size();
        tam1 = cadeia1.size();
        tam2 = cadeia2.size();
        for(int f=0;f<tam-1;f++){
            if(f < tam1) palavra = palavra + cadeia1[f];
            if(f < tam2) palavra = palavra + cadeia2[f];
        }
        cout << palavra << endl;
    }

    return 0;
}


