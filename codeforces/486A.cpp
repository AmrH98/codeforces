#include <iostream> 
#include <math.h>

using namespace std;
 

 
int main(){
 
	long long num, solve=-1;
    cin>>num;
    if(num % 2 == 0){
        solve = num / 2;
    } else{
        solve = ((num + 1) / 2) * (-1);
    }


    cout << solve <<"\n";
    return 0;
	
}
