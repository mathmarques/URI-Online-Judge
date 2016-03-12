#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int x;

    while(cin >> x) {
    	cout << x/3600 << ":" << (x/60)%60 << ":" << x%60 << endl;
    }
      
    return 0;
}