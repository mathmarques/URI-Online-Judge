#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    double a, b, c, aux;
    while(cin >> a >> b >> c){
		if(b > a){
			aux = b;
			b = a;
			a = aux;
		}

		if(c > a){
			aux = c;
			c = a;
			a = aux;
		}

		if(b > c){
			aux = b;
			b = c;
			c = aux;
		}

		if(a >= b+c){
			cout << "NAO FORMA TRIANGULO" << endl;
		} else {
			if(a*a == b*b+c*c)
				cout << "TRIANGULO RETANGULO" << endl;
			else if (a*a > b*b+c*c)
				cout << "TRIANGULO OBTUSANGULO" << endl;
			else if (a*a < b*b+c*c)
				cout << "TRIANGULO ACUTANGULO" << endl;

			if(a == b && b == c)
				cout << "TRIANGULO EQUILATERO" << endl;
			else if(a == b || b == c || a == c)
				cout << "TRIANGULO ISOSCELES" << endl;
		}

    }
     
    return 0;
}