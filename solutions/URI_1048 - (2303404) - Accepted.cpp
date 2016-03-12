#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    double S, ajuste;
    int i, reajuste[5] = {15, 12, 10, 7, 4};

    cout.precision(2);
    while(cin >> S){
    	i = ceil(S/400.0)-1;
    	if(i > 3)
    		i--;

    	if(i > 4)
    		i = 4;

    	ajuste = (reajuste[i]/100.0)*S;
	    cout << "Novo salario: " << fixed << S+ajuste << endl << "Reajuste ganho: " << fixed << ajuste << endl << "Em percentual: "<< reajuste[i] << " %" << endl;;
	    
	}    
     
    return 0;
}