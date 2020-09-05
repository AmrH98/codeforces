/*
Score
100

Time (sec)
1

Memory (KiB)
64

Language
C++
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
const unsigned int M = 1000000007;
void AND(vector<int> arr, int length, int N) 
{ 

    int arrAnd = arr[0]; 
    for (int i = 1; i < length; i++) { 
        arrAnd = arrAnd & arr[i]; 
    } 
    if ((arrAnd & N) == 0) 
        cout << "Yes" << endl; 
    else
        cout << "No" << endl; 
} 
int main() {
    int t, z, n;
    cin >> t ;                    
    while(t > 0){
        cin >> z >> n;
        vector<int> arr;   
        for (int i =0; i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp); 
        }       
        int len;
        len = arr.size();
        AND(arr, len, z);
        
        t--;
    }
    return 0;
}
