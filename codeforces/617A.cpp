#include <iostream> 

using namespace std;

int main(){
 
    int num;
    cin>>num;
    if(num < 5) cout << "1";
    else if ( num % 5 == 0) cout << num/5;
    else cout << 1+(num/5);
    return 0;
	
}
