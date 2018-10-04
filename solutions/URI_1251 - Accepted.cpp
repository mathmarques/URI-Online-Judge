#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Letra{
    char Letter;
    int Qtd = 0;
};

bool OrderLetras(Letra Y, Letra Z){
    if (Y.Qtd == Z.Qtd) return Y.Letter > Z.Letter;
    return Y.Qtd < Z.Qtd;
}

int main(){
    //freopen("entradas.in", "r", stdin);
    int pos;
    string line;
    bool espaco = false;

    while(getline(cin, line)){
        if (espaco) cout << endl;
        Letra Conjunto[300];
        for(int i=0;i<line.size();i++){
            pos = line[i];
            Conjunto[pos].Letter = line[i];
            Conjunto[pos].Qtd++;
        }
        sort(Conjunto, Conjunto+300, OrderLetras);
        for(int i=32;i<300;i++){
            if(Conjunto[i].Qtd > 0) cout << int(Conjunto[i].Letter) << " " << Conjunto[i].Qtd << endl;
        }
        espaco = true;
    }
    return 0;
}
