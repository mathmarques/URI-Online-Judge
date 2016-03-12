#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b, c; 

    while(cin >> a && a != 0){
        cin >> b >> c;

        double x = sqrt((a*b*100)/(double)c);
        
        cout << trunc(x) << endl;
    }
        
    return 0;
    
}