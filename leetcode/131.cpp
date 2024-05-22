// Runtime: 61 ms
// Beats: 97.69% of users with C++
// Memory: 52.74 MB
// Beats: 84.90% of users with C++

// Time Complexity: O(N * 2^N)
// Space Complexity: O(N * 2^N)

class Solution {
public:

    bool isPalindrome(const string& s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    void helper(string& s, vector<vector<string>>& ans, vector<string>& subset, int index){
        if(index == s.length()){
            ans.push_back(subset);
            return;
        }
        for (int end = index; end < s.length(); end++) {
            string substring = s.substr(index, end - index + 1);
            if (isPalindrome(substring)) {
                subset.push_back(substring);
                helper(s, ans, subset, end + 1);
                subset.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> subset;
        helper(s, ans, subset, 0);
        return ans;
    }
};
