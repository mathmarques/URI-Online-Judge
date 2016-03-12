#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i, val, t = 0;
    for(i = 0; i < 5; i++) {
        cin >> val;
        if(val%2 == 0)
            t++;
    }
 
    cout << t << " valores pares" << endl;
      
    return 0;
}