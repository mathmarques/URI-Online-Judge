#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int i = 0, sum = 0;
    string n;
    cout.precision(1);

    while(getline(cin, n)) {
        getline(cin, n);

        sum += stoi(n);
        i++;
    }

    cout << fixed << sum/(double)i << endl;
        
    return 0;
    
}