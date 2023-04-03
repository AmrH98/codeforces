// Runtime 20 ms Beats 98.79%
// Memory 24.8 MB Beats 99.80%

// O(n), space O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k%=size;
        if(k==0) return;
        for(int i=0,j=size-1;i<j;i++,j--) swap(nums[i], nums[j]); // reverse all array
        for(int i=0,j=k-1; i<j;i++,j--) swap(nums[i],nums[j]); // reverse 0 to k
        for(int i=k,j=size-1; i<j;i++,j--) swap(nums[i],nums[j]); // reverse k to end
    }
};

// O(n*k), space O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k%=size;
        while(k>0){
            k--;
            int prev = nums[0], next;
            for(int i=0;i<size-1;i++){
                next = nums[i+1];
                nums[i+1] = prev;
                prev = next;
            }
            nums[0] = next;
        }
    }
};
