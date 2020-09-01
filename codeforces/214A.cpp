AmrHH	214A - System of Equations	GNU C++14	Accepted	62 ms	0 KB
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    
    int answer = 0;
    for (int a = 0; (a * a) <= n && a <= m; a++)
    {
        int b = n - (a * a);
        if (a + (b * b) == m)
        {
            answer++;
        }
    }

    cout << answer;
    return 0;

}
