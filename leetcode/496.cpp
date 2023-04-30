// Runtime 7 ms Beats 68.4%
// Memory 8.7 MB Beats 65.90%

// O(N), space O(N)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> check;
        int size = nums2.size(), i=0, j=1;
        while(i<size){
            if(j == size){
                check[nums2[i]] = -1;
                i++;
                j = i + 1;
            }
            else if(nums2[j] > nums2[i]){
                check[nums2[i]] = nums2[j];
                i++;
                j = i + 1;
            } else j++;
        }
        for(int i=0; i<nums1.size(); i++) nums1[i] = check[nums1[i]];
        return nums1;

    }
};
