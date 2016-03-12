#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, i, j, max, width;
    cout.precision(10);
    while(cin >> n && n != 0){

        width = 0;
        max = pow(2, n+n-2);

        while(max > 0){
            max /= 10;
            width++;
        }

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++)
                if(i== 0 && j == 0)
                    cout << setw(width) << 1;
                else if(j == 0)
                    cout << setw(width) << pow(2, i);
                else
                    cout << " " << setw(width) << pow(2, i+j);

            cout << endl;
        }

        cout << endl;
    }
        
    return 0;
    
}