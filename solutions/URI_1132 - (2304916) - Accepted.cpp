#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int x, y, sum = 0;

	cin >> x >> y;

	if(y < x) {
		int aux = x;
		x = y;
		y = aux;
	}

	for (; x <= y; x++)
	{
		if(x%13 != 0)
			sum += x;
	}

	cout << sum << endl;

	return 0;
}