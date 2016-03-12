#include <iostream>
#include <cstring>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int i, j;

	for (i = 1, j = 60; j > -1; i+=3, j-=5)
	{
		cout << "I=" << i << " J=" << j << endl;
	}

	return 0;
}