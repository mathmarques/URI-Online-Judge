#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int x;
    double y;
    
    cout.precision(3);

    while(cin >> x >> y) {
    	cout << fixed << (x/y) << " km/l" << endl;
    }
      
    return 0;
}