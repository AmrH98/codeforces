// Runtime 4 ms Beats 77.63%
// Memory 8.5 MB Beats 33.96%

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int prev;
        int temp;
        int get=0;
        stack<int> ans;
        for(auto x:operations){
            if(x == "D"){
                ans.push(2*ans.top());
            }
            else if(x=="C"){
                ans.pop();
            }
            else if(x == "+"){
                prev = ans.top();
                ans.pop();
                temp= ans.top();
                ans.push(prev);
                ans.push(prev + temp);
            } 
            else{
                ans.push(stoi(x));
            }
        }
        while(ans.size() != 0){
            get += ans.top();
            ans.pop();
        }
        return get;
    }
};
