#include <iostream>
#include <cmath>
using namespace std;

long long int ra(int x, int y) {
	return ((3*x)*(3*x))+y*y;
}

long long int be(int x, int y) {
	return (2*x*x)+((5*y)*(5*y));
}

long long int ca(int x, int y) {
	return (-1*100*x)+(y*y*y);
}

int main(int argc, const char * argv[])
{
    int n, x, y;
    long long int r, b, c;

    cin >> n;

    for(; n > 0; n--){
    	cin >> x >> y;

    	r = ra(x, y);
    	b = be(x, y);
    	c = ca(x, y);

    	if(r > b && r > c)
    		cout << "Rafael ganhou" << endl;
    	else if(b > r && b > c)
    		cout << "Beto ganhou" << endl;
    	else
    		cout << "Carlos ganhou" << endl;
    }

    return 0;
}