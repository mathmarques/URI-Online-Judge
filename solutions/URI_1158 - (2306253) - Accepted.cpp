#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int n, x, y;
    int sum;
    cin >> n;
    while(n > 0){
        sum = 0;
        cin >> x >> y;

        for(; y > 0; x++){
            if(x%2 != 0){
                sum += x;
                y--;
            }
        }

        cout << sum << endl;

        n--;
    }

    return 0;
}