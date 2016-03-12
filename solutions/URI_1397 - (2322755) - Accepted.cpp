#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int x, y, a, b, n;
    
    while(cin >> n && n != 0) {
        a = 0;
        b = 0;
        for(; n > 0; n--){
            cin >> x >> y;
            if(x > y)
                a++;
            else if(x < y)
                b++;
        }

        cout << a <<" "<< b << endl;
    }

        
    return 0;
    
}