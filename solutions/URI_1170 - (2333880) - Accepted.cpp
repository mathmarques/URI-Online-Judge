#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int i, d;
    double c;
    cin >> i;
    
    for(;i > 0; i--){
        cin >> c;
        d = 0;
        while(c > 1.0) {
            d++;
            c /= 2.0;
        }

        cout << d << " dias" << endl;
    }

    return 0;
}