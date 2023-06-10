// Runtime 111 ms Beats 29.21%
// Memory 58.9 MB Beats 78.81%
// O(N), O(1) space
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i=0, j = height.size()-1;
        while(i != j){
            int tempArea;
            if(height[i]<=height[j]){
                tempArea = height[i] * (j-i);
                i++;
            } else{
                tempArea = height[j] * (j-i);
                j--;
            }
            area = max(area, tempArea);
        }
        return area;
    }
};
