// Runtime 6 ms Beats 23.78%
// Memory 8.2 MB Beats 92.20%

//bucket sort 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int elem[3]={0,0,0};
        for(int i=0;i<nums.size();i++){
            elem[nums[i]]++;
        }
        int i=0;
        for(int n=0;n<3;n++){
            for(int j=0;j<elem[n];j++){
                nums[i]=n;
                i++;
            }
        }
    }
};
