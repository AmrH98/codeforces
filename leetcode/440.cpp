

// ttl 

class Solution {
public:
    int findKthNumber(int n, int k) {
        int count = 1;
        for(int i=0; i<n; i++){
            k--;
            if(k == 0) return count;
             if((long long)count * 10 <= n) {
                count *= 10;
            } else {
                if(count >= n) count /= 10;
                count++;
                while(count % 10 == 0) count /= 10;
            }
        }
        return 0;        
    }
};
