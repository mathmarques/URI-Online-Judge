#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int T, x, y, mdc;
    
    cin >> T;

    for(; T > 0; T--){
    	cin >> x >> y;

    	if(y > x)
    		swap(x, y);

    	do {
    		mdc = y;
    		y = x%y;
    		x = mdc;
    	} while(y != 0);

    	cout << mdc << endl;
    }

    return 0;
}