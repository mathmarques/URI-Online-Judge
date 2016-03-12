#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int N;
    
    while(cin >> N){
        cout << N << endl;
        for(int i = 0; i < 7; i++){
            cout << N/notas[i] << " nota(s) de R$ "<< notas[i] << ",00" << endl;
            N = N%notas[i];
        }
    }
    
    return 0;
}