#include <iostream>
  
using namespace std;

int main(int argc, const char * argv[])
{
    int x, sum = 0, q = 0;
    
    while(cin >> x && x > 0) {
        sum += x;
        q++;
    }
    cout.precision(2);

    cout << fixed << sum/(double)q << endl;

    return 0;
}