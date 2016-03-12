#include <iostream>
#include <cmath>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int A, B, C;
    
    cout.precision(3);

    while(cin >> A >> B >> C) {
        A = max(A,B);
        A = max(A,C);
        cout << A << " eh o maior" << endl;
    }
      
    return 0;
}