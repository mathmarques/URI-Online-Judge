#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int n, i;

	cin >> n;

	for (i = 1; i <= 10; i++)
	{
		cout << i << " x " << n << " = " << i*n << endl;
	}


	return 0;
}