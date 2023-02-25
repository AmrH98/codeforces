// Runtime 19 ms Beats 58.86%
//Memory 15.5 MB Beats 8.83%

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        if(k==size) return nums;
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0; i<size;i++){ // map elements in nums key by there value and add repition to each
            map[nums[i]]++;
        }
        vector<vector<int>> temp(size+1);
        for(auto it=map.begin(); it!= map.end();it++){ // iterate map and put value of element in nums to position and the repition value in position values
            temp[it->second].push_back(it->first); // ex: nums =[1,1,2,2,2,3], temp = [[2]-> *position 1 because first element in nums value = 1*,[3],[1]]
            cout<< it->second <<" "<< it->first<<endl;
        }
        for(int i=size; i>=0; i--){
            if(ans.size() >= k) break; // if we reached k elements in answer break loop
            if(!temp[i].empty()) ans.insert(ans.end(), temp[i].begin(), temp[i].end()); 
        }
        return ans;
    }
};
