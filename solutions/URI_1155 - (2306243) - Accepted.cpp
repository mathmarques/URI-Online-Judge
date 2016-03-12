#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x = 100;
    double sum = 0;
    cout.precision(2);

    while(x > 0){
        sum += 1.0/(double)x;
        x--;
    }

    cout << fixed << sum << endl;
    return 0;
}