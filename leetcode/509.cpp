//Runtime 10 ms Beats 48.65%
//Memory 5.9 MB Beats 69.39%

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};
