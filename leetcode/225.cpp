// Runtime 4 ms Beats 33.80%
// Memory 6.9 MB Beats 77.65%

class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {

    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size() > 1){ // reach last element of queue
            q2.push(q1.front()); // push every element till last to q2
            q1.pop(); // pop front of q1
        }
        // q1 = [1,2,3,4,5] q2 = [1,2,3,4] * q1 without last element
        int temp = q1.front(); // last element 
        q1.pop(); // pop element from q1 
        swap(q1,q2); // put q2 in q1 in the reversed order created 
        return temp;   
    }
    
    int top() { // return last element in queue, top of the stack
        while(q1.size() > 1){ // reach last element of queue
            q2.push(q1.front());
            q1.pop();
        } // q1 = [1,2,3,4,5] q2 = [1,2,3,4] *q1 without last element
        int temp = q1.front(); // store last element
        q1.pop(); // q1 is empty
        swap(q1,q2); // q1=[1,2,3,4] q2=[]
        q1.push(temp); // q1 = [[1,2,3,4,5];
        return temp; // return 5
    }
    
    bool empty() {
        return (q1.empty() && q2.empty());
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
