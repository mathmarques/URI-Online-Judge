#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int x, i;

	cin >> x;

	for (i = 2; i < 10000; i++)
	{
		if(i%x == 2)
			cout << i << endl;
	}

	return 0;
}