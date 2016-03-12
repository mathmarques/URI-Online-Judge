#include <iostream>
#include <string>
#include <map>

#define A 0
#define B 1
#define C 2
#define D 3

using namespace std;
 
int main(int argc, const char * argv[])
{
	int M, N, i, j, X, Y, Z, max;
	int coef[10000][4];

	string key;
	map<string,int> regions;
	map<string,int>::iterator it;

	cin >> M >> N;

	for(i = 0; i < M; i++)
		cin >> coef[i][A] >> coef[i][B] >> coef[i][C] >> coef[i][D];

	for(i = 0; i < N; i++){
		key = "";
		cin >> X >> Y >> Z;

		for(j = 0; j < M; j++){
			if( ((coef[j][A]*X) + (coef[j][B]*Y) + (coef[j][C]*Z)) > coef[j][D] )
				key += '1';
			else
				key += '0';
		}

		it = regions.find(key);
		if (it != regions.end())
			it->second++;
		else
			regions[key] = 1;
	}

	max = 0;
	for (it = regions.begin(); it != regions.end(); ++it)
		if(it->second > max)
			max = it->second;

	cout << max << endl;

    return 0;
}