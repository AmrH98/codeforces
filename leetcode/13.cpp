// Runtime: 3 ms
// Memory Usage: 6.1 MB

class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        int size = s.size();
        for (int i=0; i < size; i++){
            if (i < ( size - 1 ) && charToInt(s[i]) < charToInt(s[i+1])){ // subtract if smaller roman letter value precedes a bigger number
                number -= charToInt(s[i]); 
            }
            else{
                number += charToInt(s[i]);
            }
            
        }
        return number;
    }
    
    int charToInt(char c){ 
        switch(c) {
                
            case 'I':  return 1;
            case 'V':	return 5;
            case 'X':	return 10;
            case 'L':	return 50;
            case 'C':	return 100;
            case 'D':	return 500;
            case 'M':	return 1000;
            default:	return 0;    
        }
    }
};
