#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int A, B;
    float C;
    
        cout.precision(2);

    while(cin >> A >> B >> C) {
    	cout << "NUMBER = " << A << endl;
        cout << "SALARY = U$ " << fixed << (double)(B*C) << endl;
    }
      
    return 0;
}