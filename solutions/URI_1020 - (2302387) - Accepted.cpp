#include <iostream>

using namespace std;
  
int main(int argc, const char * argv[])
{
    int x;

    while(cin >> x) {
       	cout << x/365 << " ano(s)" << endl << (x%365)/30 << " mes(es)" << endl << (x%365)%30 << " dia(s)" << endl;
    }
      
    return 0;
}