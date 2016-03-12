#include <iostream>
#include <string>
   
using namespace std;

int countTo(char c1, char c2){
    int count = 0;
    c1 -= 97;
    c2 -= 97;

    for(; c1 != c2; c1 = (c1+1)%26)
        count++;

    return count;
}

int main(int argc, const char * argv[])
{
    int t, i;
    long long sum;
    string a, b;

    cin >> t;

    for(;t>0; t--){
        cin >> a >> b;
        sum = 0;
        for(i = 0; i < a.length(); i++){
            sum += countTo(a[i], b[i]);
        }

        cout << sum << endl;
    }

    return 0;
}