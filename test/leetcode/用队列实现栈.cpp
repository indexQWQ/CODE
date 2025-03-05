#include <iostream>
#include <queue>
using namespace std;
class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q1;
    queue<int> q2;
    int count=0;
    void push(int x) {
        if(count==0)
        {
            q1.push(x);
            count++;
        }
        else if(q2.empty()){
            q1.push(x);
            count++;
        }
        else if(q1.empty()){
            q2.push(x);
            count++;
        }
    }
    int pop() {
        int temp=0;
        int ret=0;
        if(q2.empty()){
            while(!q1.empty())
            {
                temp++;
                if(temp==count)
                {
                    count--;
                    ret=q1.front();
                    q1.pop();
                    break;
                }
                q2.push(q1.front());
                q1.pop(); 
            }
        }
        else if(q1.empty()){
            while(!q2.empty())
            {
                temp++;
                if(temp==count)
                {
                    count--;
                    ret=q2.front();
                    q2.pop();
                    break;
                }
                q1.push(q2.front());
                q2.pop();    
            }
        }
        return ret;
    }
    int top() {
        int temp=0;
        int ret=0;
        if(q2.empty()){
            while(!q1.empty())
            {
                temp++;
                if(temp==count)
                {
                    ret=q1.front();
                }
                q2.push(q1.front());
                q1.pop();
                
            }
        }
        else if(q1.empty()){
            while(!q2.empty())
            {
                temp++;
                if(temp==count)
                {
                    ret=q2.front();
                }
                q1.push(q2.front());
                q2.pop();
                
            }
        }
        return ret;
    }
    bool empty() {
        if(q1.empty() && q2.empty())return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */