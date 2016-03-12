#include <iostream>
  
using namespace std;

int main(int argc, const char * argv[])
{
    int n, sum, a = 0, b = 1;
    cin >> n;

    cout << 0;
    n--;

    if(n > 0) {
        cout << " " << 1;
        n--;
    }

    for(; n > 0; n--){
        sum = b+a;
        cout << " " << sum; 
        a = b;
        b = sum;
    }

    cout << endl;

    return 0;
}