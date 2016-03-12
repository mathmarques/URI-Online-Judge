#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int m;
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    while(cin >> m){
    	cout << month[m-1] << endl;
	}    
     
    return 0;
}