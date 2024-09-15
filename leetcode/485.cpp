class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
            } else{
                if(count > maximum) maximum = count;
                count = 0;
            }
        }

        return maximum < count ? count : maximum;
    }
};
