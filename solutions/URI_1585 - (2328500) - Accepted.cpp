#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, a, b;

    cin >> n;

    for(;n > 0; n--){
        cin >> a >> b;

        cout << floor((a*b)/2) << " cm2" << endl;
    }

    return 0;
}