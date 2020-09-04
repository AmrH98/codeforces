
#include <iostream>
#include <vector>
using namespace std;
const unsigned int M = 1000000007;

int main() {
    int t, n;
    cin >> t;
    // vector<int> arr;                                
    while(t > 0){
        cin >> n;
        int count = 1;
        for(int i = 0; i <n ; i++){
            count += (1 * ((n-1)-i)) ;
        }
        cout << count << endl;
        
        t--;
    }
    return 0;
}
