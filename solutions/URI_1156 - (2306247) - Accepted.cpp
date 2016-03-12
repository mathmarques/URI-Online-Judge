#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x = 1;
    int y = 1;
    double sum = 0;
    cout.precision(2);

    while(x <= 39){
        sum += x/(double)y;
        x += 2;
        y *= 2;
    }

    cout << fixed << sum << endl;
    return 0;
}