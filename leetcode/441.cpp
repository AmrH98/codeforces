
//Runtime 20 ms Beats 6.31%
//Memory 6 MB Beats 8.43%

class Solution {
private:
    int find(int n, int val, int i){
        if(n==0) return val;
        if(n<0) return val-1;
        i++;
        return find(n-i, val+1, i);

    }
public:
    int arrangeCoins(int n) {
        int val=0, i=0;
        return find(n, val, i);
        
    }
};
