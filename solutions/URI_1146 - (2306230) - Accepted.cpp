#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, i;

    while(cin >> x && x != 0){
        for(i = 1; i <= x; i++) {
            if(i == x)
                cout << i << endl;
            else
                cout << i << " ";
        }
    }

    return 0;
}