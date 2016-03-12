#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int i, j;
	for (i = 0; i <= 20; i += 2)
	{
		for (j = 10; j <= 30; j+=10)
		{

			cout << "I=" << (float)(i/10.0) << " J=" << (float)((j+i)/10.0) << endl;
		}
	}

	return 0;
}