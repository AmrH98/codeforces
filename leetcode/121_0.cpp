// Runtime 145 ms Beats 53.9%
// Memory 93.4 MB Beats 11.81%

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0], maximum=prices[0], profit=0;
        for(auto x:prices){
            if(x >= maximum){
                maximum = x;                  
                profit = max(profit, maximum-min);
            }
            else if(x<min){
                maximum=x;
                min=x;
            }
        }
        return profit;
    }
};
 
