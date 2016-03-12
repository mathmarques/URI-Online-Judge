#include <iostream>
#include <queue>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,i;
    bool first;
    queue<int> *stack;

    while(cin >> n && n != 0){
    	stack = new queue<int>();
    	first = true;

    	for(i = 1; i <= n; i++)
    		stack->push(i);

    	cout << "Discarded cards:";
    	while(stack->size() > 1){
    		if(first){
    			cout << " " << stack->front();
    			first = false;
    		}
    		else
    			cout << ", " <<stack->front();
    		stack->pop();
    		stack->push(stack->front());
    		stack->pop();
    	}
    	cout << endl << "Remaining card: " << stack->front() << endl;
    }
    
    return 0;
}