#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    long int n, x, i, lim;
    bool found;
    
    cin >> n;
    for(; n > 0; n --){
        found = false;
        cin >> x;

        if(x == 1 || (x != 2 && x%2 == 0))
            found = true;
        else  {
            lim = sqrt(x) + 1;
            for(i = 3; i < lim; i += 2)
                if(x%i == 0) {
                    found = true;
                    break;
                }
        }

        if(found)
            cout << x << " nao eh primo" << endl;
        else
            cout << x << " eh primo" << endl;

    }

    return 0;
}