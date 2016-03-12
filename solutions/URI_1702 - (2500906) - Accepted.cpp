#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int testes, vertices, arestaO, arestaI, cores;

class No {
    public:
        int vertice;
        int cor;
        bool visitado = false;
        vector<No*> adj;

        No(){
        }

        ~No(){
        }
};

vector<No*> grafo;
int auxConexos;
vector<vector<No*>> conexos;

void idConexos(No* n){
    if(!n->visitado){
        conexos.at(auxConexos).push_back(n);
        n->visitado = true;
        for(No* m : n->adj){
            idConexos(m);
        }
    }
}

void idConexos(){
    auxConexos = -1;
    for(No* n : grafo){
        if(!n->visitado){
            auxConexos++;
            conexos.resize(auxConexos + 1);
            idConexos(n);
        }
    }
}

bool resolveConexas(){
    bool ok = false;
    for(int j = 1; j < conexos.size(); j++){
        ok = false;
        for(No* m : conexos.at(0)){
            for(No* n : conexos.at(j)){
                if(m->cor != n->cor && find(m->adj.begin(), m->adj.end(), n) == m->adj.end()){
                    arestaI--;
                    m->adj.push_back(n);
                    n->adj.push_back(m);
                    conexos.at(0).insert(conexos.at(0).end(), conexos.at(j).begin(), conexos.at(j).end());
                    conexos.erase(conexos.begin() + j);
                    ok = true;
                    break;
                }
            }
            if(ok){
                j == conexos.size() ? j = 0 : j--;
                break;
            }
        }
    }
    return conexos.size() == 1;
}

void resolveResto(){
    for(int i = 0; i < grafo.size() && arestaI > 0; i++){
        No* m = grafo.at(i);
        for(int j = i+1; j < grafo.size() && arestaI > 0; j++){
            No* n = grafo.at(j);
            if(m->cor != n->cor && find(m->adj.begin(), m->adj.end(), n) == m->adj.end()){
                arestaI--;
                m->adj.push_back(n);
                n->adj.push_back(m);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> vertices >> arestaO >> arestaI >> cores;

        int cor;

        for(int j = 1; j <= vertices; j++){
            cin >> cor;
            No* n = new No();
            n->vertice = j;
            n->cor = cor;
            grafo.push_back(n);
        }

        int x, y;
        for(int j = 0; j < arestaO; j++){
            cin >> x >> y;
            x--;
            y--;
            grafo[x]->adj.push_back(grafo[y]);
            grafo[y]->adj.push_back(grafo[x]);
        }

        idConexos();
        
        if(conexos.size() - 1 <= arestaI){
            if(resolveConexas()){
                resolveResto();
                if(arestaI == 0){
                    cout << "Y" << endl;
                }
                else{
                    cout << "N" << endl;
                }
            }
            else{
                cout << "N" << endl;
            }
        }
        else{
            cout << "N" << endl;
        }
        conexos.clear();
        grafo.clear();
    }
    return 0;
}