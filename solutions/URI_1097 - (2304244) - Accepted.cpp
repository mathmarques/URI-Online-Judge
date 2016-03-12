#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int i, j;

	for (i = 1; i <= 9; i += 2)
	{
		for (j = 6+i; j > (6+i-3); j--)
		{
			cout << "I=" << i << " J=" << j << endl;
		}
	}

	return 0;
}