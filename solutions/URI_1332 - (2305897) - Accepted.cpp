#include <iostream>
  
using namespace std;
  
int main(int argc, const char * argv[])
{
    int n;
    string str;

    cin >> n;
    for(; n > 0; n--){
        cin >> str;

        if(str.length() == 5)
            cout << 3 << endl;
        else if((str[0] == 'o' && str[1] == 'n') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e'))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }  

    return 0;
}