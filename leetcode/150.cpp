// Runtime 12 ms Beats 62.92%
// Memory 11.9 MB Beats 76.2%

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int total=0;
        for(int i=0;i<tokens.size(); i++){
            string token;
            token = tokens[i];

            if(isdigit(token[0])) {
                nums.push(stoi(token));
                continue;
            }

            if(total==0){
                int x = nums.top();
                nums.pop();
                int y = nums.top();
                nums.pop();
            } else{
                int x = nums.top();
                nums.pop();
                int y = total;
            }
            
            if(token == "+") total = x+y;
            else if(token == "-") total = x-y;
            else if(token == "/") total = x/y;
            else total = x*y;
        }
        return total;
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for(int i=0;i<tokens.size(); i++){
            string token = tokens[i];
            if(token.size() > 1 || isdigit(token[0])) {
                nums.push(stoi(token));
                continue;
            }
            int total=0;
            int x = nums.top();
            nums.pop();
            int y = nums.top();
            nums.pop();
            
            if(token == "+") total = x+y;
            else if(token == "-") total = y-x;
            else if(token == "/") total = y/x;
            else total = x*y;
            nums.push(total);
        }
        return nums.top();
    }
};


