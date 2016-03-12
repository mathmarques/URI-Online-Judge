#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    unsigned int A, B;
    
    while(cin >> A >> B) {
        cout << (A^B) << endl;
    }
      
    return 0;
}