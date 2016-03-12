#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
	int i, t = 0;
    double val;
    for(i = 0; i < 6; i++) {
    	cin >> val;
    	if(val > 0)
    		t++;
    }

    cout << t << " valores positivos" << endl;
     
    return 0;
}