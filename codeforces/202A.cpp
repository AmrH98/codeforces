AmrHH	202A - LLPS	GNU C++14	Accepted	62 ms	0 KB
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string word;
    string answer;
    cin >> word;
    char maxi = word[0]; 
    for (int i = 1; i < word.length(); i++) 
        maxi = max(maxi, word[i]); 
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == maxi) 
            answer += word[i];
    }
    cout << answer;
    return 0;

}
