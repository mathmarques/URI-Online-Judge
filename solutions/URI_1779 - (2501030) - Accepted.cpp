#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int T, N, p, i;
    int maiorSeq, maiorNum, atualSeq;

    cin >> T;
    for(i = 1; i <= T; i++){
    	cin >> N;

    	cin >> maiorNum;
    	maiorSeq = 1;
    	atualSeq = 1;

    	while(--N){
    		cin >> p;
    		if(p > maiorNum) {
    			maiorSeq = 1;
    			atualSeq = 1;
    			maiorNum = p;
    		} else if(p == maiorNum) {
    			atualSeq++;
    		} else {
    			maiorSeq = max(maiorSeq, atualSeq);
    			atualSeq = 0;
    		}
    	}

    	maiorSeq = max(maiorSeq, atualSeq);

    	cout << "Caso #"<< i << ": " << maiorSeq << endl;
    }
    return 0;
}