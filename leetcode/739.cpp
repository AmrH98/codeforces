// using stack ...
 // code.......



//code 2
// worst time complexity O(n^2)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        for(int i=0;i<size-1;i++){
            int j=i+1, count=1;
            while (j<size && temperatures[i]>=temperatures[j]){
                j++;
                count++;
            }
            if(j==i+1) temperatures[i]=1;
            else if(j>=size) temperatures[i]=0;
            else temperatures[i]=count;
        }
        temperatures[size-1]=0;
        return temperatures;

    }
};
