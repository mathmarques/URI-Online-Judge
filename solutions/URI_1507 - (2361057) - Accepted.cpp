#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string seq, sub;
    int N, Q, offset;
    bool found;
    
    cin >> N;

    for(;N > 0; N--){

        cin >> seq >> Q;

        for(;Q > 0; Q--) {
            cin >> sub;
            offset = 0;
            found = false;

            for(char c: seq)
                if(c == sub[offset] && ++offset == sub.length()) {
                    found = true;
                    break;
                }

            if(found)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }

    return 0;
}