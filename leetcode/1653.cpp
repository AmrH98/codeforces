class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        if (n == 0)
            return 0;

        vector<int> bpre(n), asuf(n);

        bpre[0] = (s[0] == 'b') ? 1 : 0;
        asuf[n - 1] = (s[n - 1] == 'a') ? 1 : 0;

        for (int i = 1; i < n; i++) {
            bpre[i] = bpre[i - 1] + (s[i] == 'b');
        }

        for (int i = n - 2; i >= 0; i--) {
            asuf[i] = asuf[i + 1] + (s[i] == 'a');
        }
        int count = min(asuf[0], bpre[n - 1]);
        for (int i = 0; i < n - 1; i++) {
            count = min(count, bpre[i] + asuf[i + 1]);
        }

        return count;
    }
};
