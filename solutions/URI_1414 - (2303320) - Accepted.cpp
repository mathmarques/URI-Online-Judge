#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    int T, N, i, total, pontos;
    string nome;

    while(cin >> T >> N && T != 0){
    	total = 0;
	    for(i = 0; i < T; i++) {
	    	cin >> nome >> pontos;
	    	total += pontos;
	    }

	    cout << (N*3)-total << endl;
	}    
     
    return 0;
}