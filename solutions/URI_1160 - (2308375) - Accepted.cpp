#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int t, i;
    long int pa, pb;
    double a, b;

    cin >> t;

    for(; t > 0; t--){
        cin >> pa >> pb >> a >> b;

        a = 1.0+(a/100.0);
        b = 1.0+(b/100.0);

        for(i = 1; pa <= pb && i <= 101; i++){
            pa = floor(pa*a);
            pb = floor(pb*b);
        }

        i--;

        if(i > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << i << " anos." << endl;
    }

    return 0;
}