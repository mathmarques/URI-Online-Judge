#include <iostream>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;

typedef struct Palavbra{
    string Palavra;
    int Place;
};

bool OrderPalavbras(Palavbra Y, Palavbra Z){
    if (Y.Palavra.size() == Z.Palavra.size()) return Y.Place < Z.Place;
    return Y.Palavra.size() > Z.Palavra.size();
}

int main(){
    //freopen("entradas.in", "r", stdin);
    int num, cont;
    string line;

    cin >> num;
    cin.get();
    for(int i=0;i<=num;i++){
        Palavbra palavbras[50];
        cont = 0;
        if(i>0) cout << endl;
        getline(cin, line);
        stringstream overwachi(line);
        while(overwachi >> palavbras[cont].Palavra){
            palavbras[cont].Place = cont;
            cont++;
        }

        sort(palavbras, palavbras+cont, OrderPalavbras);

        for(int f=0;f<cont;f++){
            if(f==0) cout << palavbras[f].Palavra;
            else cout << " " << palavbras[f].Palavra;
        }
    }
    return 0;
}
