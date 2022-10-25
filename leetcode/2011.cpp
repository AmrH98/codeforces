//Runtime: 3 ms, faster than 99.59% of C++ online submissions for Final Value of Variable After Performing Operations.
//Memory Usage: 14.1 MB, less than 56.33% of C++ online submissions for Final Value of Variable After Performing Operations.

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
         int ans=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="X++" || operations[i] =="++X") ans+=1;
            if(operations[i]=="X--" || operations[i] =="--X") ans-=1;
        }
        return ans;
    
    }
};
