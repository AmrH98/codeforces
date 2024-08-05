class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> countMap;
        vector<string> distinctOrder;

        for(const string& str : arr) {
            countMap[str]++;
        }

        for(const string& str : arr) {
            if(countMap[str] == 1) {
                distinctOrder.push_back(str);
            }
        }

        if(distinctOrder.size() < k) {
            return "";
        }

        return distinctOrder[k-1];
    }
};
