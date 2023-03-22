// Runtime 3 ms Beats 39.55%
// Memory 6 MB Beats 36.81%

// O(nlogn), space O(n)
class Solution {
public:
    int splitNum(int num) {
        string number = to_string(num);
        sort(number.begin(), number.end());
        string num1, num2; 
        int size = number.length();
        for(int i=0;i<size;i++){
            if(i%2==0) num1+=number[i];
            else num2+=number[i];
        }
        return stoi(num1) + stoi(num2);
    }
};
