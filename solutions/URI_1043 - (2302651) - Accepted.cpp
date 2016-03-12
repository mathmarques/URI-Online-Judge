#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    double x, y, z;
    cout.precision(1);
    while(cin >> x >> y >> z){
		
		if(x+y > z && x+z > y && z+y > x){
			cout << "Perimetro = " << fixed << x+y+z << endl;
		} else {
			cout << "Area = " << fixed << ((x+y)*z)/2.0 << endl;
		}

    }
     
    return 0;
}