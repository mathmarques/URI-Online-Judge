#include <iostream>
  
using namespace std;

int main(int argc, const char * argv[])
{
    int x, z, sum = 0, q = 0;
    
    cin >> x;

    do {
        cin >> z;
    } while(z <= x);

    for(; sum < z; x++, q++)
        sum += x;

    cout << q << endl;

    return 0;
}