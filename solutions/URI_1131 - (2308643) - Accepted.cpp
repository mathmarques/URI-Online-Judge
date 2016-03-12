#include <iostream>
   
using namespace std;
   
int main(int argc, const char * argv[])
{
    int op, a, b, i = 0, g = 0, e = 0;

    while(1) {
        cin >> a >> b;

        if(a == b)
            e++;
        else if (a > b)
            i ++;
        else
            g++;
     
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> op;
 
        if(op == 2)
            break;
    }

    cout << i+g+e << " grenais" << endl;
    cout << "Inter:"<< i << endl;
    cout << "Gremio:"<< g << endl;
    cout << "Empates:"<< e << endl;
 
    if(i == g)
        cout << "Nao houve vencedor" << endl;
    else if(i > g)
        cout << "Inter venceu mais" << endl;
    else
        cout << "Gremio venceu mais" << endl;

    return 0;
}