#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, qt, s, i, num, min, student;
    
    cin >> n;

    for(; n > 0; n--){
        cin >> qt >> s;
        for(i = 1; i <= qt; i++){
            cin >> num;
            num = abs(num-s);
            if(i == 1 || num < min) {
                student = i;
                min = num;
            }
        }

        cout << student << endl;
    }

        
    return 0;
    
}