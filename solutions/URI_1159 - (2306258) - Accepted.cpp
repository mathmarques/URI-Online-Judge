#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, y;
    int sum;

    while(cin >> x && x != 0){
        sum = 0;
        y = 5;
        
        for(; y > 0; x++){
            if(x%2 == 0){
                sum += x;
                y--;
            }
        }

        cout << sum << endl;
    }

    return 0;
}