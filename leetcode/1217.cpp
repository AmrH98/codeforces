// Runtime 0 ms Beats 100%
//Memory 7.3 MB Beats 93.7%
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd=0, even=0;
        for(int num:position){
            if(num%2==0) even++;
            else odd++;
        }
        return min(odd, even);
    }
};
