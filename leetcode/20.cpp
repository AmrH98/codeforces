// Runtime 0 ms
// Memory 6.4 MB

class Solution {
public:
    bool isValid(string s) {
        stack<char> string;
        for(auto temp:s){
            if(temp=='(' or temp=='{' or temp=='['){
                string.push(temp); // add bracket start to stack
            }
            else{
                if(string.empty() || (string.top()=='(' && temp!=')') || (string.top()=='[' && temp!=']') || (string.top()=='{' && temp!='}')){
                    return false; // if stack empty ( no chars ) or bracket start isn't closed return false
                }
                string.pop(); // if bracket is closed, remove bracket open and clear stack
            }
        }
        return string.empty(); // if we reached this level stack is empty so we return true, it means that all brackets are opened and closed
    }
         
};
