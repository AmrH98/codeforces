#include <iostream> 
#include <algorithm>
using namespace std;

int main(){
 
    int num,solve=0;
    int money[]= {100,20,10,5,1};
    cin>>num;
    if(num % 100 == 0){
        cout << num/100 << endl;
        return 0;
    }

    int i =0;
    while(num!=0){
        solve += num/money[i];
        num %= money[i];
        i++;
    }
	
    cout << solve <<"\n";
    return 0;
	
}
