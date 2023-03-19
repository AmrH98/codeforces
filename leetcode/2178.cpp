// Runtime 179 ms Beats 73.14%
// Memory 40.5 MB Beats 89.21%


// O(finalsum + logn) , space O(finalSum)
class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        if(finalSum%2!=0) return {};
        vector<long long> ans;
        
        long long k=2, count=0;
        while(count<finalSum){
            ans.push_back(k);
            count+=k;
            k+=2;
        }
        if(count==finalSum) return ans;
        long long temp = count-finalSum;
        int low=0, high = ans.size()-1, mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(ans[mid] == temp){
                ans.erase(ans.begin() + mid);
                return ans;
            } else if(ans[mid] < temp) low = mid+1;
            else high = mid-1;
        }
        return ans;
    }
};
