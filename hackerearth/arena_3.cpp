
#include <iostream>
#include <vector>
using namespace std;
const unsigned int M = 1000000007;

int main() {
    int n;
    cin >> n;
    vector<int> arr; 
    // vector<int> B;
    int B[n];
    for (int i =0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }   
    int q;
    cin >> q;             
    while(q > 0){
        int t, a; 
        cin >> t;
        if (t == 0){
            cin >> t >> a;
            arr[t] = a;
        }else{
            cin >> t;
            for(int i=0;i<n;i++){
                B[i]=1;
                for(int j=0;j<n;j++){
                    if(i!=j){
                        B[i]=(B[i]*arr[j]) % M ;
                        
                    }
                    // cout << B[j] << " ";
                }
                // cout << endl;
            }
            int  answer;
            answer = B[t-1];
            cout << answer << endl;
        }
        
        q--;
    }
    return 0;
}
                      


