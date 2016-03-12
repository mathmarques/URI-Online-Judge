#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[])
{
    long long unsigned vet[20][20], max[20], num;

    int n, x, m, i, j, k;

    cin >> n;
    for(x = 4; x < n+4; x++){
        cin >> m;

        for(i = 0; i < m; i++)
            for(j = 0; j < m; j++){
                cin >> num;
                vet[i][j] = num*num;
                if(i == 0 || vet[i][j] > max[j])
                    max[j] = vet[i][j];
            }

        for(j = 0; j < m; j++) {
            if(max[j] == 0)
                k = 1;
            else {
                k = 0;
                while(max[j] > 0){
                    max[j] /= 10;
                    k++;
                }
            }
            max[j] = k;
        }

        if(x != 4)
            cout << endl;

        cout << "Quadrado da matriz #" << x <<":" << endl;
        for(i = 0; i < m; i++) {
            for(j = 0; j < m; j++) {
                if(j == 0)
                    cout << setw(max[j]) << vet[i][j];
                else
                    cout << " " << setw(max[j]) << vet[i][j];
            }
            cout << endl;
        }
    }
    
        
    return 0;
}