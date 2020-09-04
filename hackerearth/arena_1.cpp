
// Sample code to perform I/O:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr;                                
    for (int i =0; i< n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    // 1. 0 x y : Update the xth element of array to y.
    // 2. 1 v: Find the position of first element which is greater than or equal to     v, and if there is no element greater than or equal to v then answer is -1.
    while(q > 0){
        int x, y, z;
        cin >> x;
        if(x == 0){
            cin >> y >> z;
            arr[y-1] = z;
        }
        else{
            cin >> y;
            int temp = 1;
            for(int i =0; i<n;i++){
                if(y <= arr[i]){
                    cout << (i + 1) << endl;
                    temp = 0;
                    break;
                }
                if (temp == 0){
                    break;
                }
            }
            if (temp == 1){
                cout << -1 << endl;
            }
        }
        q--;
    }
    return 0;
}
