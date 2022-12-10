// Runtime 0 ms
// Memory 6.3 MB
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  
        for(auto temp:s){
            if(temp=='(' or temp=='{' or temp=='[') st.push(temp);  
            else {
                if(st.empty() or (st.top()=='(' and temp!=')') or (st.top()=='{' and temp!='}') or (st.top()=='[' and temp!=']')) return false;
            st.pop(); 
            }
        }
        return st.empty(); 
    }
};
