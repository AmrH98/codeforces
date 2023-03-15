// Runtime 143 ms Beats 44.38%
// Memory 93.3 MB Beats 91.62%

// O(n), O(1) space
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell = prices[0], profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] < buy){
                buy = prices[i];
                sell = prices[i];
            }
            else sell = prices[i];
            profit = max(profit, sell-buy);
        }
        return profit;
    }
};

//Runtime: 356 ms, faster than 19.33% of C++ online submissions for Best Time to Buy and Sell Stock.
//Memory Usage: 93.4 MB, less than 9.95% of C++ online submissions for Best Time to Buy and Sell Stock.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int high=prices[0], min=prices[0], profit=0;
        for(int i=0; i < prices.size(); i++){
            if(prices[i] < min) { // if curr smaller than min, curr is new min and calculte profit
                profit = max(profit, high-min); 
                high = prices[i];
                min = prices[i];
            }else{
                high = max(high, prices[i]);
            }
        }

        
        profit = max(profit, high-min);
        return profit;


    }
};
