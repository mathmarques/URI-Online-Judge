#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int n, x, i, total = 0, C = 0, R = 0, S = 0;
 	char y;
 	cout.precision(2);
 	cin >> n;
 	for(i = 0; i < n; i++){
 		cin >> x >> y;
 		switch(y){
 			case 'C':
 				C += x;
 				break;
 			case 'R':
 				R += x;
 				break;
 			case 'S':
 				S += x;
 				break;
 		}
 	}

 	total = C + R + S;

 	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << C << endl;
	cout << "Total de ratos: " << R << endl;
	cout << "Total de sapos: " << S << endl;
	cout << "Percentual de coelhos: " << fixed << (C*100)/(double)total << " %" << endl;
	cout << "Percentual de ratos: " << fixed << (R*100)/(double)total << " %" << endl;
	cout << "Percentual de sapos: " << fixed << (S*100)/(double)total << " %" << endl;
 	      
    return 0;
}