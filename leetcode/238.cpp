

//Runtime 23 ms Beats 85.76%
//Memory 24 MB Beats 75.19%

//O()N approach based on leetcode submission, space O(1) -> on leetcode submission
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size(), pre=1,suff=1;
        vector<int> ans(size); // O(n)
        for(int i=0;i<size;i++){
            ans[i]=pre;
            pre*= nums[i];
        }
        for(int i=size-1;i>=0;i--){ // O(n)
            ans[i] *= suff;
            suff*=nums[i];
        } // O(n) +  O(n) = O(2n) =  O(n)
        return ans;
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
