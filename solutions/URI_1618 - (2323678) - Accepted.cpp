#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    
    cin >> n;

    for(; n > 0; n--){
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        
        if(rx >= ax && ry >= ay && rx <= cx && ry <= cy)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

        
    return 0;
    
}