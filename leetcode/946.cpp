// Runtime 8 ms Beats 68.46%
// Memory 15.4 MB Beats 24.28%

// O(n), space O(n) could be O(1) using two pointers and no stack
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0;
        for(int i=0; i<pushed.size(); i++){
            st.push(pushed[i]);
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};
