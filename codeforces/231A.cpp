Sep/01/2020 13:39UTC+2	AmrHH	231A - Team	GNU C++14	Accepted	62 ms	0 KB
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int num;
    cin >> num;
    int a,b,c;
    int count = 0;
    for (int i = 0; i <num; i++){
        cin >> a >> b >> c;
        if (a+b+c >= 2){
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}
