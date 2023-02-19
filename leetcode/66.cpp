// Runtime 3 ms Beats 56.97%
//Memory 8.7 MB Beats 88.89%

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        if(digits[size-1] != 9){
            digits[size-1]++;
            return digits;
        }
      
        for(int i=size-1;i>=0;i--){
            if(digits[i] == 9) digits[i]=0;
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.push_back(0); // this case only if all values are 9
        digits[0]=1;
        return digits;
    }
};
