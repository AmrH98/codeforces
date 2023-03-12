// O(n) Space O(n)
#include <vector>

int FindOutlier(std::vector<int> arr)
{
    std::vector<int> odd;
    std::vector<int> even;
    int result;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
        if(odd.size() > even.size() && even.size() == 1) return even[0];
        if(odd.size() < even.size() && odd.size() == 1) return odd[0]; // to return earlier without traversing full vector arr
    }
    return -1;
}
