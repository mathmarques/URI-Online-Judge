#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, i;

    cin >> x;

    for(i = 1; i <= x; i++){
        cout << i << " " << i*i << " " << i*i*i << endl; 
    }

    return 0;
}