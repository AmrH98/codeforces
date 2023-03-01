
// merge sort O(nlogn)
class Solution {
private:
    void merge(vector<int>& nums, int start, int end, int mid){
        int i=0, j=0, temp=start;

        vector<int> left= {nums.begin()+start,nums.begin() + mid+1};
        vector<int> right= {nums.begin()+mid+1,nums.begin() + end+1};

        while(i<left.size() && j<right.size()){
            if(left[i]<= right[j]) nums[temp]=left[i++]; // if left smaller than right, put l..
            // ..left item to curr position in array and increment left by 1
            else nums[temp]=right[j++];
            temp++; // increment curr position
        }
        while(i<left.size()) nums[temp++]=left[i++];// if any item remains in left or right append it to array 
        while(j<right.size()) nums[temp++]=right[j++];
    }
    
    vector<int> mergeSort(vector<int>&nums, int start, int end){
        // when divide of array reached base case return array
        if(end-start+1<=1) return nums; 
        int mid = (end+start)/2; // get mid 
        mergeSort(nums, start, mid); // call breakdown function for left half of array
        mergeSort(nums, mid+1, end); // call breakdown function for right half of array
        merge(nums, start, end, mid); // call sorting function for array
        return nums;

    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int start=0, end=nums.size()-1; // start and end of array to be sorted 
        return mergeSort(nums,start,end); // return array after sorting 
    }
};

// insertion sort O(n^2) 
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int j;
        for(int i=1;i<nums.size();i++){
            j = i-1;
            while(j>=0 && nums[j+1] < nums[j]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
                j--;
            }
        }
        return nums;
    }
};
