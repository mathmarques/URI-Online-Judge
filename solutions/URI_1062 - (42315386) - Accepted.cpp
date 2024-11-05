#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    int i, n, r, arriving;
    stack<int> station;
    queue<int> order;

    while(cin >> n){
        if(n == 0)
            break;
        
        while (1) {
            cin >> r;
            
            if (r == 0)
                break;
            
            station = stack<int>();
            order = queue<int>();
            
            order.push(r);
            for(i = 1; i < n; i++){
                cin >> r;
                order.push(r);
            }
            
            arriving = 1;
            while (! order.empty() && arriving <= n + 1) {
                if (!station.empty() && station.top() == order.front()) {
                    order.pop();
                    station.pop();
                    continue;
                }
                
                if (order.front() == arriving) {
                    order.pop();
                } else {
                    station.push(arriving);
                }
                
                arriving++;
            }
                
            if(order.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        
        cout << endl;
    }
 
    return 0;
}
