#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, y;

    cout.precision(3);

    while(cin >> x >> y) {
    	cout << fixed << (x*y)/12.0 << endl;
    }
      
    return 0;
}