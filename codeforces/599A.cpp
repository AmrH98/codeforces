#include <iostream> 
#include <algorithm>
using namespace std;
 

int main(){
 

    int ans,d1,d2,d3,a1,a2,a3;
    cin>>d1>>d2>>d3;
    
    a1=d1+d2+d3;
    a2=2*d1+2*d2;
    a3=2*d1+2*d3;
    ans=min(a1,min(a2,min(a3,2*d2+2*d3)));
    cout<<ans<<endl;

   
    return 0;
	
}
