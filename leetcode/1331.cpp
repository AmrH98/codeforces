class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        vector<int> ordered = arr;
        sort(ordered.begin(), ordered.end());
        int rank = 1;
        for (int i = 0; i < ordered.size(); i++) {
            if (mp.find(ordered[i]) == mp.end()) {
                mp[ordered[i]] = rank++;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};
