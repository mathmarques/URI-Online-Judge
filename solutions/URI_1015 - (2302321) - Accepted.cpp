#include <iostream>
#include <cmath>

using namespace std;
  
int main(int argc, const char * argv[])
{
    double x1, y1, x2, y2;
    
    cout.precision(4);

    while(cin >> x1 >> y1 >> x2 >> y2) {
    	

    	cout << fixed << sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) << endl;
    }
      
    return 0;
}