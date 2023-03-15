// Runtime 7 ms Beats 85.85%
// Memory 12.3 MB Beats 95.91%


//Runtime: 22 ms, faster than 33.70% of C++ online submissions for Concatenation of Array.
//Memory Usage: 12.2 MB, less than 99.39% of C++ online submissions for Concatenation of Array.

// O(n), O(n*2)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size*2);
        for(int i=0, j=size; i<size; i++, j++) ans[i]=nums[i], ans[j]=nums[i];
        return ans;
    }
};

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int temp = n;
        vector<int> ans(n*2);
        for (int i =0; i<n; i++){
            ans[i] = nums[i];
            ans[temp] = nums[i];
            temp++;
        }
        return ans;
    }
};

// Runtime 3 ms Beats 98.98%
// Memory 12.8 MB Beats 55.23%

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        for(int i=0;i<size;i++){
            nums.push_back(nums[i]);
        }
        return nums;


    }
};
