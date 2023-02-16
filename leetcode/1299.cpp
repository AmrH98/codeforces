// Runtime 102 ms Beats 97.34%
// Memory 68.6 MB Beats 43.15%

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int right = -1;
        for(int i=n-1;i>=0;i--){
            // if arr[i] = 10 and right = -1, max(-1, exchange('10' , -1)); exchange gives us 10 but
           //arr[i] is replaced with right so = -1 in current condition
            right = max(right, exchange(arr[i], right)); 
            // setting value of right to array[i] and copying arr[i] to right value
        }
        return arr;

    }
};
