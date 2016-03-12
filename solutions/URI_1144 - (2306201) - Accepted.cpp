#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int x, i, j;

    cin >> x;

    for(i = 1; i <= x; i++){
        for(j = 0; j < 2; j++)
        cout << i << " " << (i*i)+j << " " << (i*i*i)+j << endl; 
    }

    return 0;
}