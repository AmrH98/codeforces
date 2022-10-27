//Runtime: 78 ms, faster than 47.74% of C++ online submissions for Group Anagrams.
//Memory Usage: 20.6 MB, less than 56.49% of C++ online submissions for Group Anagrams.



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram; // create map with value and index of type string and array
        vector<vector<string>> ans; // declare array of arrays of string to return
        int size = strs.size(); 
        for(int i=0; i<size; i++){ 
            string temp = strs[i]; // indicate array value as string
            sort(temp.begin(), temp.end()); // sort string letters
            anagram[temp].push_back(strs[i]); 
          // add array value to map with the value ordered example: 'ate' added to new index in map 'aet' with value 'ate'
        } 
        for(auto temp2 : anagram){ 
            ans.push_back(temp2.second);
          // get values and push to new array to return
        }
        return ans;
        
        
    }
};
