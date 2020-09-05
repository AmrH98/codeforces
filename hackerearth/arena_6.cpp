
#include <iostream>
#include <vector>
using namespace std;
const unsigned int M = 1000000007;

int fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}

int main() {
    int t, x, y,z;
    cin >> t;
    // vector<int> arr;                                
    while(t > 0){
        int y1,y2,y3;
        cin >> x >> y >> z;
        int count = 0;
        y1=findMMI_fermat(x,M);
        count += (y1 * 3) % M;
        x %= 3;
        y2=findMMI_fermat(y,M);
        count += (y2 / 3) % M;
        y %= 3;
        y3=findMMI_fermat(z,M);
        count += (y3 / 3) % M;
        z %= 3;
        while(x>0 && y>0 && z>0){
            x--;
            y--;
            z--;
            count++;
        }
        cout << count << endl;
        
        t--;
    }
    return 0;
}
