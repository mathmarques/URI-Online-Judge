#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i = 0;
    long int n;
 
    cin >> n;


    do {
        cout << "N["<< i <<"] = " << n << endl;
        n *= 2;
        i++;
    } while (i < 10);
 
    return 0;
}