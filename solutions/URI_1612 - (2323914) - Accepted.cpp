#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int t;
    long long int n;
    cout.precision(10);

    cin >> t;

    for(; t > 0; t--){
        cin >> n;

        cout << ceil(n/(double)2.0) << endl;
    }

        
    return 0;
    
}