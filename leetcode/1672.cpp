// Runtime: 7 ms, faster than 66.21% of C++ online submissions for Richest Customer Wealth.
// Memory Usage: 7.8 MB, less than 86.63% of C++ online submissions for Richest Customer Wealth.
// Time Complexity : O(m * n)
// Space Complexity : O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) { // Brute force approach 
        int answer = 0;
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++){ // loop through accounts
            sum = 0;
            for (int j = 0; j < accounts[0].size(); j++){ // loop through wealth 
                sum += accounts[i][j];
            }
            answer = max(answer,sum); // compare wealth between wealthiest and next calculated loop
        }
        return answer;
    }
};
