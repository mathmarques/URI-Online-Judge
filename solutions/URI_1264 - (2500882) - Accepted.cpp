#include <iostream>
#include <string>

using namespace std;
 
int main(int argc, const char * argv[]) {
    int v[123], m, c, f, x = 0;
    string a;
    for(int i=48;i<58;i++){
        v[i]=x;
        x++;
    }
    for(int i=65;i<91;i++){
        v[i]=x;
        x++;
    }
    for(int i=97;i<123;i++){
        v[i]=x;
        x++;
    }

    while(cin >> a) {
            m = 0;
            f = 0;
            c = 0;

            if(a[0] == '-' )
                a = a.substr(1);
            
            for(int ch: a) {
				c = v[ch];
                f += c;
                if( c > m )
                    m = c;
            }

            if( f < 3 ){
                cout << "2" << endl;
            } else {
                while(m<62){
                    if(f%m==0){
                        cout << m+1 << endl;
                        break;
                    }
                    m++;
                }
                if(m==62){
                    cout << "such number is impossible!" << endl;
                }
            }
        }

    return 0;
}