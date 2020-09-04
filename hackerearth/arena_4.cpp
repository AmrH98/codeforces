
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;;
    // vector<int> arr;                                
    while(t > 0){
        cin >> n ;
        int count = 0;
        if (n % 3 == 0){
            count = n / 3;
            cout << count << endl;
        }else if(n <= 2){
            cout << 1 << endl;
        }
        else{
            while(n !=0){
                n -=2;
                count++;
                if(n % 3 == 0){
                    count += (n/3);
                    // n = 0;
                    break;
                }else if(n <= 2){
                    cout << 1 << endl;
                }
            }
        } 
        t--;
    }
    return 0;
}
