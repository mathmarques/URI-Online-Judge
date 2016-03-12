#include <iostream>
#include <cmath>

using namespace std;
 
int main(int argc, const char * argv[])
{
    double A, B, C;

    cout.precision(5);

    while(cin >> A >> B >> C){

    	double sq = (B*B)-4*A*C;
    	B *= -1;

        if(sq < 0 || 2*A == 0)
        	cout << "Impossivel calcular" << endl;
        else
        	cout << "R1 = " << fixed << (B+sqrt(sq))/(2*A) << endl << "R2 = " << fixed << (B-sqrt(sq))/(2*A) << endl;
    }
     
    return 0;
}