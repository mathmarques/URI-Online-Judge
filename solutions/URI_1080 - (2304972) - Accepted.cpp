#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
	int i, num, max, pos;

	for (i = 0; i < 100; i++)
	{
		cin >> num;
		if(i == 0 || num > max){
			max = num;
			pos = i+1;
		}

	}

	cout << max << endl << pos << endl;


	return 0;
}