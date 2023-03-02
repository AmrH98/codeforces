// Runtime 69 ms Beats 96.99%
// Memory 33.8 MB Beats 83.49%

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
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> temp(nums.begin(), nums.end()); // set to remove duplicates
        int size = nums.size();
        if(size==1) return 1;
        if(size==0) return 0;
        int maxim=0;
        for(auto &num:temp){ // iterate through set elements
            if(!temp.count(num-1)){ // if first element of the sequence execute 
                int length=1;
                while(temp.count(num+length))length++; // iterate length while n+length is in set ...length value ex:[1,2,3,4,5,6]
                maxim = max(maxim,length); // compare biggest seq with current counted one
            }
        }
        return maxim; 
    }
};
