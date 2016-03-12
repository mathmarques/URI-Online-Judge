#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int q, d, p, dc, r;
    
    while(cin >> q && q != 0) {
        cin >> d >> p;

        dc = q*p;

        d *= dc;

        q = dc/q;
        p = dc/p;

        r = trunc(d/abs(q-p));

        if(r == 1)
            cout << r << " pagina" << endl;
        else
            cout << r << " paginas" << endl;
    }

        
    return 0;
    
}