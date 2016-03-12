#include <iostream>
 
using namespace std;
  
int main(int argc, const char * argv[])
{
    int i, dia1, h1, m1, s1, dia2, h2, m2, s2, seg1, seg;
 	string c;

    cin >> c >> dia1 >> h1 >> c >> m1 >> c >> s1 >> c >> dia2 >> h2 >> c >> m2 >> c >> s2;
        
    seg1 = 3600*h1 + 60*m1 + s1;

    if(dia2-dia1 == 0)
        seg = 3600*h2 + 60*m2 + s2 - seg1;
    else
        seg = ((dia2-dia1-1) * 86400) + (86400-seg1) + 3600*h2 + 60*m2 + s2;

   	cout << (seg/86400) << " dia(s)" << endl;
    cout << (seg%86400)/3600 << " hora(s)" << endl;
    cout << ((seg%86400)%3600)/60 << " minuto(s)" << endl;
    cout << ((seg%86400)%3600)%60 << " segundo(s)" << endl;
   
    return 0;
}