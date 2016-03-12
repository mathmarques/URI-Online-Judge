#include <iostream>
  
using namespace std;

long long unsigned int fibo(int n) {

    long long unsigned int a = 0, b = 1, aux;

    if(n == 0 || n == 1)
        return n;
    else
        for( n -= 2; n >= 0; n--){
            aux = b;
            b = a+b;
            a = aux;
        }

    return b;
}
  
int main(int argc, const char * argv[])
{
    int t, n; 

    cin >> t;

    for(; t > 0; t--) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fibo(n) << endl;
    }
    
    return 0;
}