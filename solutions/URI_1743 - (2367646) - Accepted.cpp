#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int i, n, vet[5];
    bool equals = false;

    for(i = 0; i < 5; i++)
        cin >> vet[i];

    for(i = 0; i < 5; i++){
        cin >> n;
        if(n == vet[i]) {
            equals = true;
            break;
        }
    }

    if(equals)
        cout << "N" << endl;
    else
        cout << "Y" << endl;

    return 0;
}