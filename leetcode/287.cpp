// Floyd's Algorithm

// Runtime 109 ms Beats 87.7%
// Memory 61.3 MB Beats 67.20%
// O(n) , Memory O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0], fast=nums[nums[0]];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        } // after intersection between both pointers
        slow = 0;
        while(slow!=fast){ // increment both pointers by 1 till reach common index
            slow = nums[slow]; // start slow from start
            fast = nums[fast]; // and continue fast pointer from intersection by 1 
        }
        return slow;
    }
};
// Runtime 199 ms Beats 26.83%
// Memory 84 MB Beats 16.50%
// O(n) and Memory O(n)
  
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num:nums){
            if(map.find(num) == map.end()) map[num]=1;
            else return num;
        }
        return -1;
    }
};
