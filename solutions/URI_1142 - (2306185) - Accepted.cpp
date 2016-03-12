#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, i;

    cin >> x;

    for(i = 1; i <= x*4; i++){
        if(i%4 == 0)
            cout << "PUM" << endl;
        else
            cout << i << " ";
    }

    return 0;
}