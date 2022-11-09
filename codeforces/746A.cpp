#include <iostream> 
#include <algorithm>
using namespace std;
 
int main(){
 
    int a,b,c,solve,temp;
    cin>>a>>b>>c;
	if(b<2 || c < 4 || a < 1){
        cout << "0" << endl; 
        return 0;
    } 
    int b1 = b /2;
    int c1 = c / 4;
    temp = min(min(b1,c1),a);
    solve = (1*temp)+(2*temp)+(4*temp);
    cout << solve <<"\n";
    return 0;
	
}
