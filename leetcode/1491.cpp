// Runtime 5 ms Beats 32.44%
// Memory 7.1 MB Beats 66.71%

// O(n), O(1)
class Solution {
public:
    double average(vector<int>& salary) {
        int total=0, size = salary.size(), least=INT_MAX, most=0;;
        for(int i=0;i<size;i++){
            least = min(least, salary[i]);
            most = max(most, salary[i]);
            total += salary[i];
        }
        return (double)(total - least - most)/(size-2);
    }
};
// Runtime 5 ms Beats 32.44%
// Memory 7.1 MB Beats 15.84%
// O(nlogn), space O(1)
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int total=0, size = salary.size();
        for(int i=1;i<size-1;i++) total += salary[i];
        return (double)total/(size-2);
    }
};
