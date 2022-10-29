#include <iostream> 

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; i++)
#define rforn(i,a,b) for(int i=b; i>=a; i--)
typedef long long int ll;
 
int main(){
 
	int num, solve=0;; 
    cin>>num;
    int a,b,c;
	forn(i,0,num){
         cin>>a>>b>>c;
         if(a+b+c >= 2)solve++;
    }
    cout << solve <<"\n";
    return 0;
	
}
