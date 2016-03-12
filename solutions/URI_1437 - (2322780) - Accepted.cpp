#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, side;
    char c;
    
    while(cin >> n && n != 0) {
        side = 0;

        for(; n > 0; n--){
            cin >> c;
            if(c == 'D')
                side = (side+1)%4;
            else
                side = (side-1 < 0? 3 : side-1);
        }

        switch(side){
            case 0: 
                cout << "N" << endl;
                break;
            case 1: 
                cout << "L" << endl;
                break;
            case 2: 
                cout << "S" << endl;
                break;
            case 3: 
                cout << "O" << endl;
                break;
        }
    }

        
    return 0;
    
}