#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    int a, b, c, d, i, min;

    while(cin >> a >> b >> c >> d){

    	a = a*60 + b;
    	c = c*60 + d;

    	min = 1;
		for(i = (a+1)%1440; i != c; i = (i+1)%1440)
			min++;

		cout << "O JOGO DUROU "<< min/60 <<" HORA(S) E " << min%60 << " MINUTO(S)" << endl;

    }
     
    return 0;
}