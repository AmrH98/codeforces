// Runtime: 2 ms, faster than 88.01% of C++ online submissions for Fizz Buzz.
// Memory Usage: 7.2 MB, less than 87.28% of C++ online submissions for Fizz Buzz.

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 1; i <= n ; i++){
            if(0 == i%3) // if # divisble by 3
            {
                answer[i-1] += "Fizz";
            }
          
          // FizzBuzz case will be added to the string "+=" sign
            if(0 == i%5) // if # divisble by 5 
            {
                answer[i-1] += "Buzz";
            }
            if(answer[i-1].empty())
            {
                answer[i-1] += to_string(i);
            }
        }
        return answer;
    }
};
