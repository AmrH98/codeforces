// Runtime 302ms Beats 80.57%of users with C++
// Memory 101.42mb Beats 67.19%of users with C++

class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int size = dist.size(), right = 1e7, left = 1, last = dist[size-1];
        if(hour <= size - 1) return -1;
        while(left < right){
            int mid = left + (right - left)/2;
            double sum = 0;
            for(int i=0; i< size-1; i++) sum += ceil((double)dist[i]/mid); // O(n)
            sum += (double)last/mid;
            if(sum > hour) left = mid+1;
            else right = mid;
        }
        return left;
    }
};
