#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    int A, B, C, D;

    while(cin >> A >> B >> C >> D){
        if(B > C && D > A && C+D > A+B && C >= 0 && D >= 0 && A%2 == 0)
        	cout << "Valores aceitos" << endl;
        else
        	cout << "Valores nao aceitos" << endl;
    }
     
    return 0;
}