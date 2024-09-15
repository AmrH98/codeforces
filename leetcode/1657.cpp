class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int size1 = word1.size(), size2 = word2.size();
        if (size1 != size2)
            return false;

        set<char> set1(word1.begin(), word1.end());
        set<char> set2(word2.begin(), word2.end());

        if (set1 != set2)
            return false;

        map<char, int> map1, map2;
        for (char& ch : word1) {
            map1[ch]++;
        }
        for (char& ch : word2) {
            map2[ch]++;
        }
        multiset<int> freq1, freq2;
        for (const auto& entry : map1) {
            freq1.insert(entry.second);
        }
        for (const auto& entry : map2) {
            freq2.insert(entry.second);
        }

        return freq1 == freq2;
    }
};
