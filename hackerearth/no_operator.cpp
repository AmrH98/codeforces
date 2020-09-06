//Score
// 50

// Time (sec)
// 0.800000

// Memory (KiB)
// 64

// Language
// C++
#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <math.h>
using namespace std;
const unsigned int M = 1000000007;
int main() {
    int t, n, m;
    cin >> t;                              
    while(t > 0){
        cin >> n >> m;
        int count = 0;
        vector<int> arr;
        while (m>0){
            if (m % 2 == 1){
                arr.push_back(count);
            }
            count++;
            m/=2;
        }
        for ( int i = (arr.size()-1); i>-1;i--){
            cout << '('<< n <<"<<"<<arr[i]<<')'<< " ";
            if(i!=0){
                cout << "+ ";
            }
        }
        cout << endl;

        t--;
    }
    return 0;
}
