#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int x, y, n, num;
    
    while(cin >> n && n != 0) {
        x = 0;
        y = 0;
        for(; n > 0; n--){
            cin >> num;
            if(num == 0)
                x++;
            else
                y++;
        }

        cout << "Mary won "<< x <<" times and John won "<< y <<" times" << endl;
    }

        
    return 0;
    
}