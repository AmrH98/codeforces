// Runtime 5 ms Beats 56.20%
// Memory 9.7 MB Beats 7.71%

class Solution {
private:
    bool bSearch(vector<int> nums, int target, int high, int low){
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<target) low=mid+1;
            else if(nums[mid] > target) high = mid-1;
            else return true;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int bSize = matrix.size(), sSize=matrix[0].size()-1;
        for(int i=0;i<bSize;i++){
            if(matrix[i][sSize]>=target) return bSearch(matrix[i], target, sSize,0);
        }
        return false;
    }
};
