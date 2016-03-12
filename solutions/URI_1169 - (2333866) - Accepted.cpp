#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int i, x;
    cout.precision(20);
    cin >> i;
    
    for(;i > 0; i--){
        cin >> x;
        cout << (unsigned long long int)(((pow(2,x)-1)/12.0)/1000) << " kg" << endl;
    }

    return 0;
}