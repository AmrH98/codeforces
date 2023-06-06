#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool searchStall(int mid, int N, vector<int>& stalls, int C){
    int count = 1;
    int temp= stalls[0];
    for (int i = 1; i < N; i++) {
        if (stalls[i] - temp >= mid) {
            count++;
            temp = stalls[i];
        }
    }
    return count >= C;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, C;
        cin >> N >> C;

        vector<int> stalls(N); // stalls location
        for (int i = 0; i < N; i++) {
            cin >> stalls[i];
        }
        sort(stalls.begin(), stalls.end());
        int l=0, r=stalls[N-1] - stalls[0], result;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(searchStall(mid, N, stalls, C)){
                l = mid+1;
                result = mid;
            } else r = mid - 1;
        }
        cout << result << endl;
    }
    return 0;
}
