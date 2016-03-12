#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int t, q, i;
    double a, b;

    cout.precision(2);

    while(cin >> t && t != 0){
        for(i = 1; i<= t; i++) {
            cin >> q >> a >> b;

            cout << "Size #" << i << ":" << endl;
            cout << "Ice Cream Used: " << fixed << q*(((a+b)*5)/2.0) << " cm2" << endl;
        }

        cout << endl;
    }

    return 0;
}