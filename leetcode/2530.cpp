class Solution {
public:
    int divide(int num){
        int temp = num/3 + (num % 3 != 0);
        return temp;
    }

    long long maxKelements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<>());
        int len = nums.size();
        long long score = 0;
        priority_queue<int> pq;
        for(const auto &num : nums){
            pq.push(num);
        }

        while(k!=0){
            score+= pq.top();
            int temp = divide(pq.top());
            pq.pop();
            pq.push(temp);
            k--;
        }
        return score;
    }
};
