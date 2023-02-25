// Runtime 12 ms Beats 77.48%
// Memory 15.7 MB Beats 54.67%

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1, sum;
        while(i<j){
            sum =numbers[i]+numbers[j];
            if(sum==target) return {i+1,j+1};
            else if(sum<target) i++;
            else j--;
        }
        return {};
    }
};

// Runtime 22 ms Beats 19.22%
// Memory 15.8 MB Beats 7.51%

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<numbers.size();i++){
            if(map.find(numbers[i]) != map.end()) return {map[numbers[i]], ++i};
            map[target-numbers[i]] = i+1;
        }
        return {};
    }
};
