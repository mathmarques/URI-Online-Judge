#include <iostream>
  
using namespace std;

int fatorial(int n) {
    return n == 1? 1 : n * fatorial(n-1);
}

int main(int argc, const char * argv[])
{
    
    int n;
    cin >> n;

    cout << fatorial(n) << endl;

    return 0;
}