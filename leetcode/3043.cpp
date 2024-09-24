class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // one map includes parsed i element of arr2
        // get element of arr1 parse it and check map
        // clear map and go to next element in arr1

        map<string, int> mp;
        int len = arr1.size();
        int longest = 0;

        for (int num : arr2) {
            string strNum = to_string(num);
            for (size_t i = 1; i <= strNum.length(); ++i) {
                string subStr = strNum.substr(0, i);
                mp[subStr]++;
            }
        }

         for (int num : arr1) {
            string strNum = to_string(num);
            for (size_t i = 1; i <= strNum.length(); ++i) {
                string subStr = strNum.substr(0, i);
                if (mp.find(subStr) != mp.end()) {
                    longest = max(longest, (int)subStr.length());
                }
            }
        }
        return longest;
    }
};
