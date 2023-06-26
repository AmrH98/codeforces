// Runtime 219 ms Beats 49.8%
// Memory 72.8 MB Beats 82.21%

1class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int>> min1;
        priority_queue<int, vector<int>, greater<int>> min2;
        int i=0, j = costs.size() - 1;
        long long ans = 0;
        while(k-- > 0){
            while(min1.size() < candidates && i <= j){
                min1.push(costs[i]);
                i++;
            }
            while(min2.size() < candidates && j >= i){
                min2.push(costs[j]);
                j--;
            }
            int cand1 = min1.size() > 0 ? min1.top() : INT_MAX;
            int cand2 = min2.size() > 0 ? min2.top() : INT_MAX;

            if(cand1 <= cand2){
                min1.pop();
                ans += cand1;
            } else{
                min2.pop();
                ans += cand2;
            }
        }
        return ans;
    }
};
