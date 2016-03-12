#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int i; 
    double n;

    cout.precision(1);
 
    for(i = 0; i < 100; i++) {
        cin >> n;
        if(n <= 10)
            cout << "A["<< i <<"] = " << fixed << n << endl;
    }
  
    return 0;
}