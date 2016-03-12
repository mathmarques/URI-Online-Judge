#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int i, j, n, t, c, num;

    cin >> n;

    for(i = 1;i <= n; i++){
    	cin >> t;
    	c = (t/2)+1;
    	for(j = 1; j <= t ; j++){
    		cin >> num;
    		if(j == c)
    			cout << "Case " << i << ": " << num << endl;
    	}
    }

    return 0;
}