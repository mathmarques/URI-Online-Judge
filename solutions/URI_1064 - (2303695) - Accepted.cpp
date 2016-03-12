#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int i, t = 0;
    double val, sum = 0;
    cout.precision(1);
    for(i = 0; i < 6; i++) {
        cin >> val;
        if(val > 0) {
            t++;
            sum += val;
        }
    }
 
    cout << t << " valores positivos" << endl;
    cout << fixed << sum/t << endl;
      
    return 0;
}