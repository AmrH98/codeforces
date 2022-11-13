#include <iostream> 
#include <algorithm>
#include <cctype>

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; i++)
#define rforn(i,a,b) for(int i=b; i>=a; i--)
typedef long long int ll;
 
int main(){
 
 
    int n,m,k;
    cin>>n>>m>>k;
    int ans[2];
    int skip = m*2;
    int desk = 0;
    int max = m*n*2;
    int seat;
    int lane = 1;
    while(desk < max){
        if(k >= desk && k <= (desk+skip)){
            seat = k - desk;
            if(seat % 2 == 0){
                seat = seat / 2;
            } else{
                seat = (seat / 2) + 1;
            }
            ans[1] = seat;
            ans[0] = lane;
            break;
        }
        desk += skip;
        lane++;
    }

    forn(i,0,2){
        cout << ans[i] << " ";
    }
    if(k%2 == 0){  cout << "R"<<endl;}
    else{ cout << "L"<<endl;}
    return 0;
	
}
