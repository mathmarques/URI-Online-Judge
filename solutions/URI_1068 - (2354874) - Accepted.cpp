#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string eq;
    int check;
    
    while(cin >> eq) {
        check = 0;

        for(char c: eq){

            if(c == ')')
                check--;
            else if (c == '(')
                check++;

            if(check == -1)
                break;
        }

        if(check == 0)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }

    return 0;
}