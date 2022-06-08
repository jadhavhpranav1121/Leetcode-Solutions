// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
public:
    queue<int> q;
    MyStack() {
    
    }
    
    void push(int x) {
        q.push(x);
        while(q.front()!=x){
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
    
    int pop() {
        int a=q.front(); 
        q.pop();
        return a;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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