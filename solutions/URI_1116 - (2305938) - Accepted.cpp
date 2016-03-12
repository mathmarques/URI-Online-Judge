#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int n, x, y;

    cin >> n;
    cout.precision(1);
    for(; n > 0; n--) {

        cin >> x >> y;

        if(y == 0)
            cout << "divisao impossivel" << endl;
        else
            cout << fixed << x/(double)y << endl;
    }

    return 0;
}