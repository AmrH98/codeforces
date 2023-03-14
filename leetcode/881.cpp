// Runtime 82 ms Beats 87.82%
// Memory 41.8 MB Beats 93.62%

// O(nlogn) , space O(1)
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i=0, j=people.size()-1, boat=0;
        while(i<=j){
            if(people[i]+people[j] <= limit){
                i++;
                j--;
            }
            else j--;
            boat++;
        }
        return boat;
    }
};
