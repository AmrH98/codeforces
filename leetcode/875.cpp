// Runtime 46 ms Beats 68.22%
// Memory 18.9 MB Beats 50.78%


// O(nlog*max(piles)) , space  O(1)

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // biggest element in pile thats our range from 1 to max
        int high=0, size =piles.size(), low = 1, k;
        for(int i=0;i<size;i++) high = max(high, piles[i]); // get max element in piles
        // we could use *max_element(piles.begin(), piles.end());
        int ans = high;
        while(low <= high){ // binary search 
            k = low+(high-low)/2; // get mid element from range low to high
            long int time=0;
            for(int i=0;i<size;i++) time+= ceil((double) piles[i] /k);
            // ^ time to eat through all piles with eating speed of k
            if(time<=h){
                ans = min(ans, k);
                high = k-1;
            } // if too slow 
            else low = k+1;
        }
        return ans;  
        // Input: piles = [30,11,23,4,20], h = 6
        // low = 1, high = 30 -> range of speeds 
        // k = 15 , time = 8 , time<=h ? low=k+1 : ans=min(ans,15) , high = k - 1 
        // low = k+1, we need to eat faster through piles
    }
};
