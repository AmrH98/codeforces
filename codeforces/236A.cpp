#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string word;
    int temp;
    int count = 1;
    cin >> word;
    sort(word.begin(), word.end());
    for (int i =0; i<word.size()-1;i++){
        if (word[i] != word[i+1]){
            count++;
        }
    }
    if (count % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    
}
