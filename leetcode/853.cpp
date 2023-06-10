// Runtime 323 ms Beats 24.7%
// Memory 98.7 MB Beats 5.82%

// O(nlogn), O(n) space
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int,double> map;
        int size = speed.size();
        for(int i=0; i<size; i++){
            map[position[i]] = static_cast<double>(target-position[i]) / speed[i];
        }
        sort(position.begin(), position.end());
        int fleet = 0;
        double maxTime = 0;
        for(int i=size-1; i>=0; i--){
            if(map[position[i]] > maxTime){
                fleet++;
                maxTime = map[position[i]];
            }
        }
        return fleet;
    }
};
