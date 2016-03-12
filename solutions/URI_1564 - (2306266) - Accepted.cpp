#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x;

    while(cin >> x){
        if(x == 0)
            cout << "vai ter copa!" << endl;
        else
            cout << "vai ter duas!" << endl;
    }

    return 0;
}