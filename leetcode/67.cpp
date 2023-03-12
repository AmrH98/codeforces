// Runtime 7 ms Beats 18.39%
// Memory 8.2 MB Beats 5.4%

//Time O(max(m,n)) , Space O(max(m,n)
class Solution {
public:
    string addBinary(string a, string b) {
        int one= a.length()-1, two=b.length()-1;
        int carry =0;
        string ans = "";
        
        // loop till reach end of any of both strings 
        while(one>=0 || two >=0){
            int x = one >=0 ? a[one]-'0' : 0 ; // turn char value to int if it's a 1 or add int 0
            int y = two >=0 ? b[two]-'0' : 0 ;
            int sum = x + y + carry;
            carry = sum/2;
            // add to string 
            ans = to_string(sum%2) + ans;
            one--;
            two--;
        }
        // add if there is additional carry
        if(carry==1) ans = '1' + ans;
        return ans;
    }
};
