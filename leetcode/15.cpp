class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for (int left = 0; left < len - 2; left++) {
            int k = left + 1;
            int right = len - 1;
            while (k < right) {
                int sum = nums[left] + nums[k] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[left], nums[k], nums[right]});
                    
                    while (k < right && nums[k] == nums[k + 1]) k++;
                    while (k < right && nums[right] == nums[right - 1]) right--;
                    
                    k++;
                    right--;
                } else if (sum < 0) {
                    k++;
                } else {
                    right--;
                }
            }
            
            while (left < len - 2 && nums[left] == nums[left + 1]) left++;
        }
        return ans;
    }
};

// Runtime 117 ms Beats 95.41%
// Memory 24.1 MB Beats 73.43%
// O(n^2), space O(n)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int size = nums.size();
        for(int i=0; i<size-2; i++){
            if(nums[i] > 0) break; // no possible answer 
            if(i>0 && nums[i] == nums[i-1]) continue; // !duplicates
            int left = i+1, right = size - 1;
            while(left < right){
                int tempSum = nums[i] + nums[left] + nums[right];
                if(tempSum > 0) right--;
                else if(tempSum < 0) left++;
                else{
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left+1]) left++; // !duplicates
                    left++;
                    while(left < right && nums[right - 1] == nums[right]) right--; // !duplicates
                    right--;
                }
            }
        }
        return ans;
        
    }
};
