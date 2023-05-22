class MinStack {
public:
    stack<int>s,temp;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(temp.empty() || temp.top()>=val) temp.push(val);

    }
    
    void pop() {
        if(temp.top()==s.top()){
            temp.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return temp.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */