// s2
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        stringstream ss(s1 + " " + s2);
        string word;

        while (ss >> word) {
            wordCount[word]++;
        }

        vector<string> result;
        for (const auto& entry : wordCount) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};

// s1
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream ss(s1);
        stringstream ss2(s2);
        string word, word2;
        map<string, int> mp;
        while (ss >> ws >> word || ss2 >> ws >> word2) {
            if(ss) mp[word]++;
            if(ss2) mp[word2]++;
        }
        vector<string> ans;
        for(auto i=mp.begin(); i!= mp.end(); i++){
            if(i->second == 1) ans.push_back(i->first);
        }
        return ans;
    }
};
