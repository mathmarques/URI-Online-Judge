#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, p, t;
    cin >> n;
    
    p = 2; t = 1;
    while(p != 1){
        if(p <= n/2){
            p += p;
        }else{
            p -= (n - p + 1);
        }
        t++;
    }
    cout << t << endl;
    
    return 0;
}