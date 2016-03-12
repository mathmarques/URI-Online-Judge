#include <iostream>
   
using namespace std;
   
int main(int argc, const char * argv[])
{
    int x;
 
    long int i, n, sum;
    cin >> x;
 
    for(; x > 0; x--){
        sum = 0;
        cin >> n;
 
        for(i = n-1; i > 0 && sum <= n; i--)
            if(n%i == 0)
                sum += i;
 
        if(sum == n)
            cout << n << " eh perfeito" << endl;
        else
            cout << n << " nao eh perfeito" << endl;
    }
 
    return 0;
}