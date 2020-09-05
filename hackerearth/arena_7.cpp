#include <iostream>
#include <vector>
using namespace std;
const unsigned int M = 1000000007;
int modulo(int f){
    for (int i = 1; i < f-1; i++){
            f = (f*i) % M;
        }
    return f;
}
int main() {
    int t, n, k;
    cin >> t;
    // vector<int> arr;                                
    while(t > 0){
        cin >> n >> k;
        int answer = 0;
        n = modulo(n);
        k = modulo(k);
        answer = (n*k) * 2;
        cout << answer <<endl;
        t--;
    }
    return 0;
}
