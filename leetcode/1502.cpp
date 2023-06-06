// Runtime 3 ms Beats 85.28%
// Memory 9.1 MB Beats 66.22%
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for(int i=1;i<arr.size()-1;i++) if(arr[i+1]-arr[i] != diff) return false;
        return true;
    }
};
