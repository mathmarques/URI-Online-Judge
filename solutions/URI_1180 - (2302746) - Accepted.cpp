#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    int N, i, num, min, pos;

    cin >> N;
    for(i = 0; i < N; i++) {
    	cin >> num;
    	if(i == 0 || num < min){
    		min = num;
    		pos = i;
    	}
    }
    	
    cout << "Menor valor: " << min << endl << "Posicao: " << pos << endl;
    
     
    return 0;
}