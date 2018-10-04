#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    string dieta, cafe, almoco, janta, comida;
    int n, pos;

    cin >> n;
    cin.get();
    for(int i=0;i<n;i++){
        pos = 0;
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);
        comida = cafe+almoco;
        for(int f=0;comida[f];f++){
            pos = dieta.find(comida[f]);
            if(pos == -1){
               break;
            }
            else dieta.erase(pos,1);
        }
        if(pos == -1)
            cout << "CHEATER" << endl;
        else{
            sort(dieta.begin(),dieta.end());
            cout << dieta << endl;
        }
    }

    return 0;
}