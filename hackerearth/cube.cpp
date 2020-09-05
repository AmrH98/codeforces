//https://nrich.maths.org/paintedcube/solution
#include <math.h>
#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
const unsigned int M = 1000000007;
int main() {
    int t, n;
    cin >> t;                   
    while(t > 0){
        cin >> n;
        int answer, answer2;
        answer = fmod(pow(n,3),M);
        answer2 = fmod(pow((n-2),3),M);
        answer -= answer2;
        if(n==1){
            answer = 1;
        }

        cout << answer << endl;
        t--;
    }
    return 0;
}
