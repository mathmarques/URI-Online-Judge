#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    long long int v, t;

    while(cin >> v >> t){
        cout << abs(v-t) << endl;
    }

    return 0;
}