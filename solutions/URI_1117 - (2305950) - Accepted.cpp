#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int q = 0;
    double n, sum = 0;
    cout.precision(2);
    do{
        cin >> n;
        if(n >= 0 && n <= 10){
            sum += n;
            q++;
        } else
            cout << "nota invalida" << endl;
            
    } while(q < 2);

    cout << "media = " << fixed << sum/2.0 << endl;

    return 0;
}