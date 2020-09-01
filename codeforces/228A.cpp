AmrHH	228A - Is your horseshoe on the other hoof?	GNU C++14	Accepted	62 ms	0 KB
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector<int> shoes;
    int temp;
    while(cin >> temp){
        shoes.push_back(temp);
    }
    temp = 0;
    int size;
    sort(shoes.begin(), shoes.end());
    for (int i=0; i<shoes.size()-1;i++){
        if (shoes[i] == shoes[i+1]){
            temp++;
        }
    }
    cout <<temp;
    return 0;
}
