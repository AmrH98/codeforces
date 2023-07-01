// using stack
// Runtime 236 ms Beats 42.31%
// Memory 107.5 MB Beats 20.22%
// O(n), O(n) space
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


//code 2
// worst time complexity O(n^2)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        for(int i=0;i<size-1;i++){
            int j=i+1, count=1;
            while (j<size && temperatures[i]>=temperatures[j]){
                j++;
                count++;
            }
            if(j==i+1) temperatures[i]=1;
            else if(j>=size) temperatures[i]=0;
            else temperatures[i]=count;
        }
        temperatures[size-1]=0;
        return temperatures;

    }
};
