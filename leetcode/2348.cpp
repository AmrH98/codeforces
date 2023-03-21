//Runtime 160 ms Beats 88.54%
// Memory 107.5 MB Beats 54.45%

// Improved code with extra formula without while loop
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long  count = 0;
        for(int num:nums){
            if(num!=0){
                ans += (count * (count + 1)) / 2;
                count = 0;
            }
            else count++;
        }
        if(count!=0) ans += (count * (count + 1)) / 2;
        return ans;
    }
};

// Improved code without using vector ( less space ) 
//Runtime 168 ms Beats 75.72%
// Memory 107.5 MB Beats 54.45%
// O(n), O(1)
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        int count = 0;
        for(int num:nums){
            if(num!=0) while(count>0) ans+=count--;
            else count++;
        }
        if(count!=0) while(count>0) ans+=count--;
        return ans;
    }
};

// Runtime 183 ms Beats 36.35%
// Memory 113.9 MB Beats 6.34%
// O(n) , space O(n)
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        int count = 0;
        vector<long long> cons;
        for(int num:nums){
            if(num!=0){
                cons.push_back(count);
                count=0;
            }
            else count++;
        }
        if(count > 0) cons.push_back(count);
        for(int num:cons) if(num!=0) while(num!=0) ans+= num--;
        return ans;
    }
};
