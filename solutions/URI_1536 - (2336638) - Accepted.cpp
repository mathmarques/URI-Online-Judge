#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int n, t1, t2, st1, st2, p1t1, p1t2, p2t2, p2t1;
    char x;

    cin >> n;

    for(; n > 0; n--){
    	cin >> p1t1 >> x >> p1t2 >> p2t2 >> x >> p2t1;
    	t1 = 0;
    	t2 = 0;
    	if(p1t1 == p1t2) {
    		t1++;
    		t2++;
    	} else if(p1t1 > p1t2) 
    		t1 += 3;
    	else
    		t2 += 3;

    	if(p2t1 == p2t2) {
    		t1++;
    		t2++;
    	} else if(p2t1 > p2t2) 
    		t1 += 3;
    	else
    		t2 += 3;

    	if(t1 == t2) {
    		st1 = (p1t1-p1t2) + (p2t1-p2t2);
    		st2 = (p1t2-p1t1) + (p2t2-p2t1);

    		if(st1 == st2) {

    			if(p2t1 == p1t2) {
    				cout << "Penaltis" << endl;
		    	} else if(p2t1 > p1t2) 
		    		cout << "Time 1" << endl;
		    	else
		    		cout << "Time 2" << endl;

	    	} else if(st1 > st2) 
	    		cout << "Time 1" << endl;
	    	else
	    		cout << "Time 2" << endl;

    	} else if(t1 > t2) 
    		cout << "Time 1" << endl;
    	else
    		cout << "Time 2" << endl;

    }

    return 0;
}