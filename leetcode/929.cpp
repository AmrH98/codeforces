// Runtime 23 ms Beats 78.55% 
// Memory 13.8 MB Beats 68.96%

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> ans;
        // parse string and add them to set and return set size 
        for(auto& email:emails){
            string temp;
            for(char c:email){
                if(c =='+' || c=='@') break;
                if(c=='.')continue;
                temp+=c;
            }
            temp += email.substr(email.find('@'));
            ans.insert(temp);
        }
        return ans.size();
    }
};


// Runtime 97 ms Beats 5.6% 
// Memory 40.8 MB Beats 5.12%

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> get;
        // parse string and add them to set and return set size 
        for(int i =0; i<emails.size(); i++){
            string local = emails[i].substr(0, emails[i].find('@'));
            // remove + and all chars after + 
            local = local.substr(0, local.find('+'));
            // remove . 
            local = regex_replace(local, regex("\\."), "");
            string domain = emails[i].substr(emails[i].find('@') + 1, emails[i].length());
            string temp = local + '@' + domain;
            get.insert(temp);
        }
        return get.size();
    }
};
