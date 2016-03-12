#include <iostream>
  
using namespace std;

int main(int argc, const char * argv[])
{
    int i, r1, r2; 

    cin >> i;
    
    for(; i > 0; i--){
        cin >> r1 >> r2;
        cout << r1+r2 << endl;
    }
        
    return 0;
}