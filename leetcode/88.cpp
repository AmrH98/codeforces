

// Runtime 0 ms Beats 100%
// Memory 9.2 MB Beats 35.69%

//O(nlogn), O(1) space

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        int size1= nums1.size();
        for(int i=size1-n, j=0; i<size1; i++, j++) nums1[i] = nums2[j];
        sort(nums1.begin(),nums1.end());
    }
};
