#include <iostream>
#include <string>
#include <stack>
using namespace std;

class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> v1;
    stack<int> v2;
    void push(int x) {
        while(!v2.empty())
        {
            v1.push(v2.top());
            v2.pop();
        }
        v1.push(x);
    }
    
    int pop() {
        while(!v1.empty())
        {
            v2.push(v1.top());
            v1.pop();
        }
        int temp=v2.top();
        v2.pop();
        return temp;
    }
    
    int peek() {
        while(!v1.empty())
        {
            v2.push(v1.top());
            v1.pop();
        }
        return v2.top();
    }
    
    bool empty() {
        if(v1.empty() && v2.empty())return true;
        return false;
    }
    
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */