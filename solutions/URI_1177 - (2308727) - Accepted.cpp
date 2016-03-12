#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i, n;
 
    cin >> n;

    for(i = 0; i < 1000; i++) {
        cout << "N["<< i <<"] = " << i%n << endl;
    }
 
    return 0;
}