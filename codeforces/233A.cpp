AmrHH	233A - Perfect Permutation	GNU C++14	Accepted	62 ms	200 KB
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int perm;
    cin >>perm;
    if (perm % 2 == 1){
        cout << -1;
        return 0;
    }
    cout << "2 1";
    for (int i = 3; i < perm; i += 2){
            cout << " " << i + 1 << " " << i;
        }
    
}
