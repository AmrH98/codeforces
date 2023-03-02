// BS rows and columns
//Runtime 3 ms Beats 86.75%
//Memory 9.6 MB Beats 7.71%
    
class Solution {
private:
    bool bSearch(vector<int> nums, int target, int high, int low){
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]<target) low=mid+1;
            else if(nums[mid] > target) high = mid-1;
            else return true;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int high = matrix.size()-1, low =0;
        while(low<high){
            int mid = low+(high-low)/2;
            if(matrix[mid][0]==target) return true;
            else if(matrix[mid][0] < target && matrix[mid+1][0]>target){
                low = mid;
                break;
            }
            else if(matrix[mid][0] < target) low = mid+1;
            else high = mid-1;
        }
        int lowCol=0;
        high=matrix[low].size()-1;
        return bSearch(matrix[low],target,high,lowCol);
    }
};

// Runtime 5 ms Beats 56.20%
// Memory 9.7 MB Beats 7.71%

class Solution { // here we did binary search only for columns within a row but not for rows too
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
