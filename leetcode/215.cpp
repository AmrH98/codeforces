// Runtime 733 ms Beats 5.1%
// Memory 45.9 MB Beats 55.88%

// using quick sort
class Solution {
private:
    void qSort(vector<int>&nums, int start, int end){
        if(end-start +1 <=1) return;
        int pivot = nums[end];
        int left = start;
        for(int i=start;i<end;i++){
            if(nums[i]<pivot){
                int temp = nums[left];
                nums[left] = nums[i];
                nums[i] = temp;
                left++;
            }
        }
        nums[end]=nums[left];
        nums[left] = pivot;

        qSort(nums, start, left-1);
        qSort(nums, left+1, end);
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size = nums.size();
        qSort(nums,0,size-1);

        return nums[size-k];
    }
};
