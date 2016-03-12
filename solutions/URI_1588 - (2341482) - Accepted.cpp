#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Time {
public:
    string nome;
    int ordem;
    int pontos = 0;
    int vitorias = 0;
    int gols = 0;

    Time(){}
};

bool sortAlg(Time* t1, Time* t2){
    if(t1->pontos > t2->pontos)
        return true;
    else if(t2->pontos > t1->pontos)
        return false;

    if(t1->vitorias > t2->vitorias)
        return true;
    else if(t2->vitorias > t1->vitorias)
        return false;

    if(t1->gols > t2->gols)
        return true;
    else if(t2->gols > t1->gols)
        return false;

    return t1->ordem < t2->ordem;
}

int main(int argc, const char * argv[]) {
    
    int t, n, m, i, p1, p2;
    string t1n, t2n;
    map<string, Time*> times;
    vector<Time*> tSort;
    Time *tim, *t1, *t2;

    cin >> t;
    
    for(;t>0; t--){
        cin >> n >> m;
        times.clear();
        tSort.clear();

        for(i = 0; i < n; i++){
            tim = new Time();
            cin >> tim->nome;
            tim->ordem = i;
            times[tim->nome] = tim;
            tSort.push_back(tim);
        }

        for(i = 0; i < m; i++){
            cin >> p1 >> t1n >> p2 >> t2n;
            t1 = times[t1n];
            t2 = times[t2n];

            if(p1 > p2){
                t1->pontos += 3;
                t1->vitorias++;
            } else if(p2 > p1) {
                t2->pontos += 3;
                t2->vitorias++;
            } else {
                t1->pontos++;
                t2->pontos++;
            }

            t1->gols += p1;
            t2->gols += p2;
        }

        sort(tSort.begin(), tSort.end(), sortAlg);

        for(Time* t : tSort){
            cout << t->nome << endl;
        }


    }

    return 0;
}
