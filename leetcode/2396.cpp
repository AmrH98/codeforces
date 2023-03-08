// Runtime 4 ms Beats 5.98%
// Memory 6.1 MB Beats 16.10%

class Solution {
private:

    void binary(int n, vector<int>& binaryNum, int k){
        int i = 0;
        while (n > 0) {
            binaryNum.push_back(n % k);
            n = n / 2;
            i++;
        }
    }
public:
    bool isStrictlyPalindromic(int n) {
        int k = 2;
        while(k <= n-2){
            vector<int> binaryNum;
            binary(n, binaryNum, k);
            int size = binaryNum.size();
            for(int i=0;i<size;i++) if(binaryNum[i]!= binaryNum[size-1-i]) return false;
            k++;
        }
        return true;
    }
};
