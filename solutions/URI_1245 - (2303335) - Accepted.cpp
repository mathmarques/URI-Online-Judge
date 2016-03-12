#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int N, total, i, read;
    char l;
    int esquerda[31] = {0};
    int direita[31] = {0};

    while(cin >> N){
    	total = 0;
	    for(i = 0; i < N; i++) {
	    	cin >> read >> l;
	    	if(l == 'E')
	    		esquerda[read-30]++;
	    	else
	    		direita[read-30]++;
	    }

	    for(i = 0; i < 31; i++) {
	    	total += min (esquerda[i],direita[i]);
	    	esquerda[i] = 0;
	    	direita[i] = 0;
	    }


	    cout << total << endl;
	}    
     
    return 0;
}