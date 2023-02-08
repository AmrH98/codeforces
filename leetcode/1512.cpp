// Runtime 5 msBeats27.97%Memory7.3 MBBeats 16.25%

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> ans; // store values and count occurences 
        int count =0; // count pairs
        for(int i=0;i<nums.size();i++){
            if(ans[nums[i]] > 0 ){ // if is repeated more than 0 add pair 
               count+= ans[nums[i]];
            }
            ans[nums[i]]++; // count not repeated ( new ) add 1 
        }
        return count;

    }
    
};
