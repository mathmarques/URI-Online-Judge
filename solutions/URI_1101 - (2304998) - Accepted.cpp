#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int m, n, aux, sum;

    while(cin >> m >> n){
    	sum = 0;
    	if(m <= 0 || n <= 0)
    		break;

    	if(n < m){
    		aux = n;
    		n = m;
    		m = aux;
    	}

    	for(;m <= n; m++){
    		cout << m << " ";
    		sum += m;
    	}

    	cout << "Sum=" << sum << endl;
    }

    return 0;
}