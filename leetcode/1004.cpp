// O(n)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, zeros = 0;
        int maximum = 0;
        int size = nums.size();

        while (right < size) {
            if (nums[right] == 0) {
                zeros++;
            }

            while (zeros > k) {
                if (nums[left] == 0) zeros--;
                left++;
            }

            maximum = max(maximum, right - left + 1);

            right++;
        }

        return maximum;
    }
};





// O(n^2)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right;
        int maximum = 0;
        int size = nums.size();
        
        while (left < size) {
            if ((size - left) < k) break;
            right = left;
            int temp = k, count = 0;
            
            while (right < size) {
                if (nums[right] == 0) {
                    if (temp == 0) break;
                    temp--;
                }
                count++;
                right++;
            }
            
            if (count > maximum) maximum = count; 
            left++;
        }
        
        return maximum;
    }
};
