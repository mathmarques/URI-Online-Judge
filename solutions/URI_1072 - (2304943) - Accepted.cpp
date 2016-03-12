#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int n, i;
	long int num;
	long int in = 0, out = 0;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> num;
		if(num >= 10 && num <= 20)
			in++;
		else
			out++;
	}

	cout << in << " in" << endl << out << " out" << endl;

	return 0;
}