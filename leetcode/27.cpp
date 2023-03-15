// Runtime 0 ms Beats 100%
// Memory 8.9 MB Beats 46.24%

// O(n), O(1) space
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size =nums.size(), i=0, j=size-1, count=0;
        while(i<=j){
            cout<< nums[i]<<endl;
            if(nums[i]==val){
                count++;
                nums[i]= nums[j];
                j--;
            }
            else i++;
        }
        return size-count;
    }
};
