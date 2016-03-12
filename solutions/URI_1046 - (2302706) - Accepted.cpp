#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    int a,b, i, d;

    while(cin >> a >> b){
    	d = 1;
		for(i = (a+1)%24; i != b; i = (i+1)%24)
			d++;

		cout << "O JOGO DUROU "<< d <<" HORA(S)" << endl;

    }
     
    return 0;
}