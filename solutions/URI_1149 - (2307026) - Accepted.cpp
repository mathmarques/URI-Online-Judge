#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    long int n, i, quant, sum = 0;

    cin >> n;

    do {
        cin >> quant;
    } while (quant <= 0);

    for(i = 0; i < quant; i++, n++)
        sum += n;

    cout << sum << endl;

    return 0;
}