#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    string enunciado, palavbra;
    int npalavbra, nletra, media, segura, ponto;

    while(getline(cin, enunciado)){
        if(enunciado == "eof") break;
        npalavbra = 0;
        nletra = 0;
        stringstream wow(enunciado);
        while(wow >> palavbra){
            npalavbra++;
            segura = nletra;
            ponto = 0;
            for(int i=0;i<palavbra.size();i++){
                if(isalpha(palavbra[i])) nletra++;
                else if(palavbra[i] == '.'){
                    ponto++;
                    if(ponto > 1){
                    nletra = segura;
                    npalavbra--;
                    break;
                    }
                }
                else{
                    nletra = segura;
                    npalavbra--;
                    break;
                }
            }
        }
        if(nletra <= 0 and npalavbra <= 0) media = 0;
        else media = nletra/npalavbra;

        if (media < 4) cout << "250" << endl;
        else if (media > 3 and media < 6) cout << "500" << endl;
        else if (media > 5) cout << "1000" << endl;
    }

    return 0;
}
