// Runtime 0 ms Beats 100%
// Memory 8 MB Beats 20.89%
// O(N) , space O(1)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0, ans = 0;
        for(int i=0; i< gain.size(); i++){
            int temp = gain[i] + altitude;
            altitude = temp;
            ans = max(ans, temp);
        }
        return ans;
    }
};
