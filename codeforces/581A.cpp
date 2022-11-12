#include <iostream> 
#include <algorithm>
using namespace std;
int main(){
 
 
    int r,b;
    cin>>r>>b;
    int pair = 0, diff = 0;
    while(r != 0){
        if(b == 0) break;
        r--;
        b--;
        diff++;
    }
    pair = (r / 2 ) + (b / 2);
    cout << diff << " "<< pair << "\n";
    return 0;
	
}
