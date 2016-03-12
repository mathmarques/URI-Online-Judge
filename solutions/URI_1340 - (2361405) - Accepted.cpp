#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, type, x;
    queue<int> q;
    priority_queue<int> pq;
    stack<int> s;
    bool bq, bpq, bs;

    while(cin >> n){
        bq = true;
        bpq = true;
        bs = true;
        q = queue<int>();
        pq = priority_queue<int>();
        s = stack<int>();

        for(;n > 0; n--) {
            cin >> type >> x;

            if(!bq && !bpq && !bs) //Impossible, just continue
                continue;

            if(type == 1){
                q.push(x);
                pq.push(x);
                s.push(x);
            } else {
                bq = bq && (q.front() == x);
                q.pop();
                bpq = bpq && (pq.top() == x);
                pq.pop();
                bs = bs && (s.top() == x);
                s.pop();
            }

        }

        if(!bq && !bpq && !bs)
            cout << "impossible" << endl;
        else if((bq && bpq && bq == bpq) || (bq && bs && bq == bs) || (bpq && bs && bpq == bs))
            cout << "not sure" << endl;
        else if(bq)
            cout << "queue" << endl;
        else if(bpq)
            cout << "priority queue" << endl;
        else
            cout << "stack" << endl;

    }

    return 0;
}