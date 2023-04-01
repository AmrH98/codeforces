// Runtime 80 ms Beats 11.29%
// Memory 342.6 MB Beats 6.2%
//copied nums vector 

// Runtime 13 ms Beats 70.19%
// Memory 21.5 MB Beats 50.19%
// passed nums vector by reference 

// O(n), space O(n)
class Solution {
private:
    TreeNode* build(vector<int>& nums, int start, int end){
        if(start>end) return nullptr;
        int mid = start+(end-start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = build(nums, start, mid-1);
        root->right = build(nums, mid+1, end);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size()-1);
    }
};
