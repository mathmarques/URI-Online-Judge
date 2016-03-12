#include <iostream>
  
using namespace std;

int main(int argc, const char * argv[])
{
    int i, j, q = 0; 
    double n, sum = 0;
    char op;

    cout.precision(1);

    cin >> op;

    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++){
            cin >> n;
            if(j < 12-1-i) {
                sum += n;
                q++;
            }
        }
    
    if(op == 'S')
        cout << fixed << sum << endl;
    else
        cout << fixed << sum/(double)q << endl;
    
    return 0;
}