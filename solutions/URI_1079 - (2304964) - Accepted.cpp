#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int n, i;
	double a, b, c;

	cin >> n;
	cout.precision(1);

	for (i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		cout << fixed << (2*a + 3*b + 5*c)/10.0 << endl;
	}


	return 0;
}