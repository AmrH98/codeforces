/*
Runtime: 23 ms
Beats 82.96% of users with C++

Memory: 23.67 MB
Beats 83.92% of users with C++
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> maps;
        for(int i=0; i < strs.size(); i++){
            string ana = strs[i];
            sort(ana.begin(), ana.end());
            maps[ana].push_back(strs[i]);    
        }
        for (const auto& pair : maps) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};

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

// ANS 2
// Runtime 146 ms Beats 9.3%
// Memory 27.4 MB Beats 12.96%
    
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> ans;
       unordered_map<string, vector<string>>  map;
       for(int i=0;i<strs.size(); i++){
           string temp = getKey(strs[i]); // get string from function and the set map values to temp as key and initial string as value
           map[temp].push_back(strs[i]); // key = temp, value = string from strs
       }
       for(auto i:map){
           ans.push_back(i.second);
       }
       return ans;
    }

private: 
    string getKey(string s){
        int temp[26] = {0};
        for(char i:s){
            temp[i - 'a']++; // for every char in string add to vector
        }
        string key="";
        for(int i=0; i<26;i++){
            // add char value as int into string key as string         
            key += to_string(temp[i] + 'a');
        }
        return key;
    }

};
