/*
Score
80

Time (sec)
0.600000

Memory (KiB)
64

Language
C++
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

bool prime(int q, int val){
	if (q - val < 0 ){
		return false;
	} 
	return true;
}
int primes(int q) 
{ 
    int arr[q + 1]; 
  
    for (int i = 1; i <= q; i++) 
        arr[i] = 1e9; 
  
    arr[0] = arr[2] = arr[3] = arr[5] = arr[7] = 1; 
    for (int i = 1; i <= q; i++) { 
        if (prime(i, 2)) 
            arr[i] = min(arr[i], 1 + arr[i - 2]); 
  
        if (prime(i, 3)) 
            arr[i] = min(arr[i], 1 + arr[i - 3]); 
  
        if (prime(i, 5)) 
            arr[i] = min(arr[i], 1 + arr[i - 5]); 
  
        if (prime(i, 7)) 
            arr[i] = min(arr[i], 1 + arr[i - 7]); 
    } 
  
    if (arr[q] == (1e9)) 
        return -1; 
    else
        return arr[q]; 
} 
int main() {
    int t, q;
    cin >> t;
    while(t > 0){
		cin >> q;
		int answer;
		answer = primes(q);
		if (answer == -1){
			cout << -1 << endl;
		}else{
			cout << answer << endl;
		}
		t--;
	}
    return 0;
}
