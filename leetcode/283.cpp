// Runtime 15 ms Beats 98.70%
// Memory 19.3 MB Beats 17.16%

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                y++;
            }
            else{
                swap(nums[x], nums[i]);
                x++;
                y++;
            }
        }
    }
};
