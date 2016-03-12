#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, i;

    for(i = 0; i < 10; i++){
        cin >> n;

        cout << "X["<< i <<"] = " << (n <= 0? 1 : n) << endl;
    }

    return 0;
}