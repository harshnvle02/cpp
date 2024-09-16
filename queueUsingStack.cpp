#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Queue { 
	stack<int> stack_; 

	// Enqueue an item to the queue 
	void enqueue(int x) 
	{ 
		stack_.push(x); 
	} 

	// Dequeue an item from the queue 
	int dequeue() 
	{ 
		if (stack_.empty()) { 
			cout << "Queue is empty" << endl;; 
			exit(0); 
		} 

		// pop an item from the stack 
		int x = stack_.top(); 
		stack_.pop(); 

		// if stack becomes empty, return 
		// the popped item d
		if (stack_.empty()) 
			return x; 

		// recursive call 
		int ret = dequeue(); 
        

		// push popped item back to the stack 
		stack_.push(x); 

        cout<<x<<endl;

		// return the result of deQueue() call 
		return ret; 
	} 
}; 

int main() 
{ 
	Queue q; 
	q.enqueue(3); 
	q.enqueue(4); 
	q.enqueue(5); 

	// cout << q.dequeue() << endl; 
	// cout << q.dequeue() << endl; 
	// cout << q.dequeue() << endl;/
    int ret = q.dequeue();
    cout<<endl<<ret<<endl;

    int ret1 = q.dequeue();
    cout<<endl<<ret1 <<endl;

    int ret2 = q.dequeue();
    cout<<endl<<ret2 <<endl;
}