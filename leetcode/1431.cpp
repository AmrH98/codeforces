//Runtime 8 msBeats20.70% 
//Memory9 MB Beats 15.56%

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int max = *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size();i++){
            if(candies[i] + extraCandies < max) result[i] = false;
            else result[i] = true;
        }
        return result;
    }
};
