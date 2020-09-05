#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
int main() {
    int a,b;
    cin >> a >> b;
    string s;
    int count = 0;
    int answer = 0;
    cin >> s;
    int len = s.size();

    for (int i=0; i<len;i++){
        if (i == 0){
            count = a;
            // cout << count << "test1" <<endl;
        }else{
            count = (count * count) % b;
            // cout << count << "test2" <<endl;
        }
        if (s[i]=='1'){
            answer += count;
        }

    }
    cout << answer << endl;
    return 0;
}
