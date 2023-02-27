// Runtime 20 ms Beats 87.6%
// Memory 16.4 MB Beats 63.24%

class MinStack {
private: 
    stack<int> s1; // our stack
    stack<pair<int,int>> minS; // minimum stack
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(minS.empty() || minS.top().first > val) minS.push({val,1});
        else if(val == minS.top().first) minS.top().second++;
    }
    
    void pop() {
        if(s1.top() == minS.top().first) minS.top().second--;
        if(minS.top().second == 0) minS.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return minS.top().first;
        
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
