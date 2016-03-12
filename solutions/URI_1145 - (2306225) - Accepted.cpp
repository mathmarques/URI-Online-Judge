#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, y, i;

    cin >> x >> y;

    for(i = 1; i <= y; i++) {
        if(i%x == 0)
            cout << i << endl;
        else
            cout << i << " ";
    }

    return 0;
}