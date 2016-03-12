#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
	double raio, pi = 3.14159;
    
    cout.precision(4);

    while(cin >> raio)
        cout << "A=" << fixed << pi*raio*raio << endl;
     
    return 0;
}