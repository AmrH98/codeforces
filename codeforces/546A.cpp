#include <iostream> 

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; i++)

int main(){
 
    int k,n,w;
    cin>>k>>n>>w;

    int sum =0;
    forn(i,1,w+1){
        sum+= k * i;
    }
    if(sum <= n){
        cout << "0";
        return 0;
    }
    cout << sum - n << endl;
    
    return 0;
	
}
