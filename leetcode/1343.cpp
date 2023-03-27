// Runtime 102 ms Beats 33.33%
// Memory 55.4 MB Beats 30.89%

// O(n+k), space O(1)
class Solution { // sliding window
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0, j=k-1, count=0, sum=0;
        while(i<j) sum+= arr[i++];
        i=0;
        while(j<arr.size()){
            sum += arr[j];
           if(sum/k >= threshold) count++;
           sum -= arr[i];
           i++;
           j++;
        }
        return count;


        //brute force O(n^2)
        // int i=0, j=k-1, count=0, curr;
        // while(j<arr.size()){
        //     curr=0;
        //     temp = i;
        //     while(temp<=j) curr += arr[temp++];
        //     if(curr/k>=threshold) count++;
        //     j++;
        //     i++;
        // }
        // return count;
    }
};
