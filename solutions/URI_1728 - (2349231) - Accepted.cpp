#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    string eq;
    size_t plus, equals;
    int a, b, c;
    cout.precision(6);

    while(cin >> eq){
        if(eq == "0+0=0")
            break;

        plus = eq.find("+");
        equals = eq.find("=");
        reverse(eq.begin(), eq.begin()+plus);
        reverse(eq.begin()+(plus+1), eq.begin()+equals);
        reverse(eq.begin()+equals+1, eq.end());

        if( ( stoi(eq.substr(0, plus)) + stoi(eq.substr(plus+1, equals-plus-1)) ) == stoi(eq.substr(equals+1)) )
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }

    cout << "True" << endl;

    return 0;
}