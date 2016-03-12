#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
	double preco[6] = {0.0, 4.0, 4.5, 5.0, 2.0, 1.5};
    int x, y;
    cout.precision(2);
    while(cin >> x >> y){
    	cout << "Total: R$ " << fixed << preco[x]*y << endl;
    }
     
    return 0;
}