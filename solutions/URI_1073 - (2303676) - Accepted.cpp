#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int N, i;
    
    cin >> N;

    for(i = 1; i <= N; i++) {
        if(i%2 == 0) {
            cout << i << "^2 = " << i*i << endl;
        }
    }
 
    return 0;
}