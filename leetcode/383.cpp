// runtime 14ms 
// memory 8.9 MB
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> cnt(128);
        for (char temp: magazine) ++cnt[temp];
        for (char temp: ransomNote) {
            if (cnt[temp] <= 0) return false;
            cnt[temp]--;
        }
        return true;
    }
};
