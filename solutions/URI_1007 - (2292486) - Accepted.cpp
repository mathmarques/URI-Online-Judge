#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int A, B, C, D;
      
    while(cin >> A >> B >> C >> D)
        cout << "DIFERENCA = " << fixed << ((A*B)-(C*D)) << endl;
      
    return 0;
}