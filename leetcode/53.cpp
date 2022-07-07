// Runtime: 229 ms, faster than 10.32% of C++ online submissions for Maximum Subarray.
// Memory Usage: 67.7 MB, less than 53.49% of C++ online submissions for Maximum Subarray.
// Following Kadane’s Algorithm : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int all = 0; 
        int maximum = INT_MIN; // limits.h library, avoiding maximum from registring smaller values 
        
        for (auto& i : nums){
            all += i; 
            maximum = max(maximum, all); // if maximum is bigger than all assign all to maximum
            if (all < 0) // ignore value if smaller than 0
                all = 0;
        
        }
        return maximum;
    }
};
