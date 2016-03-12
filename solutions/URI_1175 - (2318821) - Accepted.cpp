#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int i, n[20]; 
 
    for(i = 0; i < 20; i++)
        cin >> n[i];            
    
    for(i = 0; i < 20; i++)
        cout << "N["<< i <<"] = " << n[19-i] << endl;
  
    return 0;
}