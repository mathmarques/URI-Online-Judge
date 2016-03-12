#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    double n1, n2, n3, n4, exame;
    cout.precision(1);
    while(cin >> n1 >> n2 >> n3 >> n4){
    	double media = (2*n1+3*n2+4*n3+1*n4)/10.0;
    	cout << "Media: " << fixed << media << endl;
    	if(media >= 7.0)
    		cout << "Aluno aprovado." << endl;
    	else if(media < 5.0)
    		cout << "Aluno reprovado." << endl;
    	else {
    		cout << "Aluno em exame." << endl;
    		cin >> exame;
    		cout << "Nota do exame: " << fixed << exame << endl;
    		media = (media+exame)/2.0;
    		if(media >= 5.0)
    			cout << "Aluno aprovado." << endl;
    		else
    			cout << "Aluno reprovado." << endl;

    		cout << "Media final: " << fixed << media << endl;
    	}
    }
     
    return 0;
}