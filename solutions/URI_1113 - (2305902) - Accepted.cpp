#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int a, b;

    while(cin >> a >> b) {
        if(a == b)
            break;

        if(a < b)
            cout << "Crescente" << endl;
        else
            cout << "Decrescente" << endl;
    }

    return 0;
}