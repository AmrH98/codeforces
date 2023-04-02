// use binary search to find first element bigger than success

// Runtime 236 ms Beats 85.87%
// Memory 97.2 MB Beats 73.7%
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int i=0, size = potions.size();
        long long strengths;
        vector<int> res(spells.size());
        while(i<spells.size()){
            int count = 0, j=0, low=0, high=size-1, mid;
            while(low<=high){
                mid = low + (high-low)/2;
                strengths = static_cast<long long>(spells[i]) * static_cast<long long>(potions[mid]); 
                if(strengths>=success) high = mid - 1;
                else low = mid+1;
            }
            count = size - low;
            if(mid == size) res[i] = 0;
            else res[i] = count;
            i++;
        }
        return res;
    }
};



// O(n*m*mlogm) m is potions size and n is spells size , space O(1) 
// failed on time
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int i=0, size = potions.size();
        while(i<spells.size()){
            int count = 0, j=0;
            long long strengths = static_cast<long long>(spells[i]);
            while(j<size && strengths*static_cast<long long>(potions[j])<success) j++;
            if(j==size) count = 0;
            else count = size - j;
            spells[i] = count;
            i++;
        }
        return spells;
    }
};
