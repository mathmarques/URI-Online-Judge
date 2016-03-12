#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    string name[] = {"", "Rolien", "Naej", "Elehcim", "Odranoel"};
    int n, k, i;
    
    cin >> n;

    for(; n > 0; n--){
        cin >> k;
        for(; k > 0; k--){
            cin >> i;
            cout << name[i] << endl;
        }
    }

        
    return 0;
    
}