class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res;
        vector<pair<int, char>> counts = {{a, 'a'}, {b, 'b'}, {c, 'c'}};

        while (true) {
            bool add = false;
            sort(counts.begin(), counts.end(), greater<pair<int, char>>());

            for (auto& [count, ch] : counts) {
                if (count == 0)
                    break;

                int n = res.size();
                if (n >= 2 && res[n - 1] == ch && res[n - 2] == ch) {
                    continue;
                }
                res += ch;
                count--;
                add = true;
                break;
            }
            if (!add)
                break;
        }
        return res;
    }
};
