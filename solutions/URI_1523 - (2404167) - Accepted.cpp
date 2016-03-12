#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    int i, n, k, c, s, max;
    bool erro;
    stack<int> estacionamento;
 
    while(cin >> n >> k){
        if(n == 0 && k == 0)
            break;

        int in[100000] = {0};
        int out[100000] = {0};
        estacionamento = stack<int>();

        erro = false;
        
        for(i = 1;i <= n; i++){
            cin >> c >> s;

            if(i == 0 || s > max)
                max = s;

            in[c] = c;
            out[s] = c;
        }

        for(i = 1; i <= max; i++){
            if(out[i] != 0) {
                if(!estacionamento.empty() && estacionamento.top() == out[i])
                    estacionamento.pop();
                else {
                    erro = true;
                    break;
                }
            }

            if(in[i] != 0){
                if(estacionamento.size() < k)
                    estacionamento.push(in[i]);
                else {
                    erro = true;
                    break;
                }    
            }
        }

        if(erro)
            cout << "Nao" << endl;
        else
            cout << "Sim" << endl;
    }
 
    return 0;
}