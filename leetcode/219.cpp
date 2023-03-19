// Runtime 172 ms Beats 89.53%
// Memory 77.3 MB Beats 48.30%
// O(n) , space O(n)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i = 0; i<nums.size(); i++){
            if(map.find(nums[i]) != map.end() && abs(i-map[nums[i]] <= k)) return true;
            else map[nums[i]] = i;
        }
        return false;
    }
};

// Runtime 211 ms Beats 32.99%
// Memory 78.3 MB Beats 25.37%

// O(n) , space O(n)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num:nums) map[num]++;
        int j, size = nums.size();
        for(int i = 0; i<size; i++){
            if(map[nums[i]]-- > 1){
                j=i+1;
                while(j<size && nums[j] != nums[i]) j++;
                if(abs(i-j)<=k) return true;
            }
        }
        return false;
    }
};
