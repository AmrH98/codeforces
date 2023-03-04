// Runtime 19 ms Beats 92.54%
// Memory 19.1 MB Beats 98.94%
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int move=0;
        // count moved elements and place non zero element in relative position of variable move
        for(int i=0;i<nums.size();i++) if(nums[i]!=0) nums[move++] = nums[i];
        // complete rest of the array with zeros as we already moved all valid elements
        for(move; move<nums.size();move++) nums[move]=0;
    }
};

// Runtime 15 ms Beats 98.70%
// Memory 19.3 MB Beats 17.16%

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[x++], nums[i]);
            }
        }
    }
};
