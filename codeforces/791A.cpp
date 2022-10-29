#include <iostream> 

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; ++i)
#define rforn(i,a,b) for(int i=b; i>=a; --i)
typedef long long int ll;
 
int main(){
 
	int l, b,count=0;; 
    cin>>l>>b;

	while(l<=b){
        l*=3;
        b*=2;
        count++;
    }
    cout << count <<"\n";
    return 0;
	
}
