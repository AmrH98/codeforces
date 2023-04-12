// Runtime 4 ms Beats 78.99%
// Memory 10.8 MB Beats 10.19%

// O(n), space O(n)

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string ans, dir;
        stringstream path1(path);
        // getline from path1 to string dir ex:
        // path = "/home//foo/" 1- dir = home, 2- foo
        while(getline(path1, dir, '/')){ 
            if(dir == "" || dir == ".") continue;
            else if(dir == "..") {
                if(!st.empty()) st.pop();
            }
            else st.push(dir);
        }
        
        // 1- dir = home, 2- foo
        // / + foo + "" = / + home + /foo = /home/foo
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        return ans.empty() ? "/" : ans;
    }
};
