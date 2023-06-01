#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;


bool check(long long cakes, vector<long long>& required, vector<long long>& have, long long k) {
    long long n = required.size();
    long long totalNeeded = 0;
    for(long long i = 0; i < n; i++) {
        long long needed = cakes * required[i]; // cakes = mid
        needed -= have[i]; 
        if(needed > 0) totalNeeded += needed;
        if(totalNeeded > k) return false;
    }
    return totalNeeded <= k;
}

long long binarySearch(long long n, long long k, vector<long long>& required, vector<long long>& have) {
 
    long long result = 0;
 
    long long left = 0;
    long long right = 2e9 + 1;
 
    while(left <= right) {
        long long mid = (long long)(left + right) / 2;
        if(check(mid, required, have, k)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main()
{
    long long n, k; 
    cin >> n >> k;
    vector<long long>required(n);
    vector<long long>have(n);
 
    for(long long i = 0; i < n; i++) cin >> required[i];
    for(long long i = 0; i < n; i++) cin >> have[i];
 
    long long result = binarySearch(n, k, required, have);
    cout << result << endl;
    return 0;
    
}
