// Runtime 69 ms Beats 96.99%
// Memory 33.8 MB Beats 83.49%

// O(nlogn), space O(1)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        if(size==1) return 1;
        if(size==0) return 0;
        int maxim=1, count=1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<size-1;i++){
            if(nums[i] == nums[i+1]-1) count++;
            else if(nums[i]== nums[i+1]) continue;
            else count = 1;
            maxim = max(count, maxim);
        }
        return maxim;
    }
};

//Runtime 120 ms Beats 82.26%
// Memory 45.7 MB Beats 77.50%

// O(n) , space O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int size = nums.size();
        if(size==0) return 0;
        if(size == 1) return 1;
        int best = 1;
        for(int num:set){
            if(!set.count(num-1)){
                int count = 1;
                while(set.count(num+count)) count++;
                best = max(best, count);
            }
        }
        return best;

    }
};
