#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b, c;
    
    while(cin >> a >> b >> c) {
        if(a == b && b == c)
            cout << "*" << endl;
        else if(a == b && c != b)
            cout << "C" << endl;
        else if(a == c && b != c)
            cout << "B" << endl;
        else
            cout << "A" << endl;
    }

        
    return 0;
    
}