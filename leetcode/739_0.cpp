// Runtime 236 ms Beats 42.31%
// Memory 107.5 MB Beats 20.22%

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        int size = temperatures.size();
        vector<int> ans(size);
        for(int i = 0; i < size; i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                int tempIndex = st.top().second;
                ans[tempIndex] = i - tempIndex;
                st.pop();
            }
            st.push({temperatures[i], i});
        }
        return ans;
    }
};
