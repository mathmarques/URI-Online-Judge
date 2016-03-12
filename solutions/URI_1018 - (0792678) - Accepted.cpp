#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int N;
    while(cin >> N){
        
        cout << N << endl;
        cout << N/100 << " nota(s) de R$ 100,00" << endl;
        N = N%100;
        
        cout << N/50 << " nota(s) de R$ 50,00" << endl;
        N = N%50;
        
        cout << N/20 << " nota(s) de R$ 20,00" << endl;
        N = N%20;
        
        cout << N/10 << " nota(s) de R$ 10,00" << endl;
        N = N%10;
        
        cout << N/5 << " nota(s) de R$ 5,00" << endl;
        N = N%5;
        
        cout << N/2 << " nota(s) de R$ 2,00" << endl;
        N = N%2;
        
        cout << N << " nota(s) de R$ 1,00" << endl;
        
    }
    return 0;
}