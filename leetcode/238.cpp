//Runtime 23 ms Beats 85.76%
//Memory 24 MB Beats 75.19%

//O(n} approach based on leetcode submission 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size(), pre=1;
        vector<int> answer(size);
        for(int i=0;i<size;i++){
           answer[i] = pre;
           pre *= nums[i];
        }
        pre=1; // post
        for(int i=size-1;i>=0;i--){
            answer[i] *= pre;
            pre*=nums[i];
        }
        return answer;
    }
};




// O(n^2) approach

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size(), prod;
        vector<int> answer(size);
        for(int i=0;i<size;i++){
            prod = 1;
            for(int j=0;j<size;j++){
                if(i==j) continue;
                else prod*=nums[j];
                answer[i]=prod;
            }
        }
        return answer;

    }
};
