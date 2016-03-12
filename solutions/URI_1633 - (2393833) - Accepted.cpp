#include <iostream>
#include <queue>
#include <vector>
#include <utility>
 
using namespace std;

typedef pair<int, int> PAIR;
 
int main(int argc, const char * argv[]) {
    int n, i, t, c;
    long long int espera;
    long long int tempoExec;
    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> processos;
    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> f;
    PAIR p;
 
    while(cin >> n){
        espera = 0;
        tempoExec = 0;
 
        for(i = 0; i < n; i++) {
            cin >> t >> c;
            processos.push(make_pair(t, c));
        }
        
        tempoExec = processos.top().first;

        while(!processos.empty()) {
            p = processos.top();
            if(p.first > tempoExec) {
                if(f.top().second <= tempoExec)
                    espera += tempoExec - f.top().second;
                else
                    tempoExec = f.top().second;
                tempoExec += f.top().first;

                f.pop();
            }
            f.push(make_pair(p.second, p.first));
            processos.pop();
        }
 
        while(!f.empty()) {
            if(f.top().second <= tempoExec)
                    espera += tempoExec - f.top().second;
                else
                    tempoExec = f.top().second;
            tempoExec += f.top().first;

            f.pop();
        }
 
        cout << espera << endl;
    }
 
    return 0;
}