#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[])
{
    int n, a, b, j, i, total;
 	
 	cin >> n;
 	for(j = 0; j < n; j++){
 		cin >> a >> b;
 		total = 0;
        if(b < a){
            int aux =  b;
            b = a;
            a = aux;
        }
 
        for(i = a + 1; i < b; i++)
            if(i%2 != 0)
                total += i;
 
        cout << total << endl;
 	}
      
    return 0;
}