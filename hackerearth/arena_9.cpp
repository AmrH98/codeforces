
#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
const unsigned int M = 1000000007;
int main() {
    int t, n;
    cin >> t;
    // vector<int> arr;                                
    while(t > 0){
        cin >> n ;
        long long answer;
        answer = (2 * n * n) % M;
        answer = (answer - n + M) % M; 
        cout << answer << endl;
        t--;
    }
    return 0;
}
