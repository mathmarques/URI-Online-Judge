#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    long long int a, b, c, d;
    int n;

    cin >> n;

    for(;n > 0; n--){
    	cin >> a >> b;
    	d = 1;
    	c = b;

    	while(c > 0){
    		c /= 10;
    		d *= 10;
    	}

    	if(a%d == b)
    		cout << "encaixa" << endl;
    	else
    		cout << "nao encaixa" << endl;

    }

    return 0;
}