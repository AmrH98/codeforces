// Runtime 16 ms Beats 92.13%
// Memory 23.3 MB Beats 50.73%


class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        for(int i=0;i<size/2;i++){
            char temp = s[i];
            s[i] = s[size-1-i];
            s[size-1-i] = temp;
        }
    }
};
