#include <iostream>

using namespace std;

int calls = 0, result = 0;

int fib(int x){
	if(x <= 1) {
		result += x;
		return x;
	}
	else {
		calls += 2;
		return fib(x-1) + fib(x-2);
	}
}

int main(int argc, const char * argv[]) {
    int T, x;
    
    cin >> T;

    for(; T > 0; T--){
    	cin >> x;
    	calls = 0;
    	result = 0;

    	fib(x);
    	cout << "fib("<< x <<") = "<< calls <<" calls = "<< result << endl;
    }

    return 0;
}