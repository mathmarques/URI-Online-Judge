#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, y;

    while(cin >> x >> y) {
        if(x == 0 || y == 0)
            break;

        if(x > 0)
            if(y > 0)
                cout << "primeiro" << endl;
            else
                cout << "quarto" << endl;
        else
            if(y > 0)
                cout << "segundo" << endl;
            else
                cout << "terceiro" << endl;
    }

    return 0;
}