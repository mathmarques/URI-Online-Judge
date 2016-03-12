#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i;
    double n;

    cin >> n;
    cout.precision(4);

    for(i = 0; i < 100; i++) {
        n = (i == 0? n : n/2.0);
        cout << "N["<< i <<"] = " << fixed << n << endl;
    }
 
    return 0;
}