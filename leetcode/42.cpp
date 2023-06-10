// Runtime 12 ms Beats 89.48%
// Memory 19.7 MB Beats 94.79%
// O(n), O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0, size = height.size(), i=0, j=size-1;
        int maxLeft = height[i], maxRight = height[j];
        while(i < j){
            if(maxLeft > maxRight){
                j--;
                maxRight = max(maxRight, height[j]);
                sum += maxRight - height[j];
            } else {
                i++;
                maxLeft = max(maxLeft, height[i]);
                sum += maxLeft - height[i];
            }
        }
        return sum;
    }
};
