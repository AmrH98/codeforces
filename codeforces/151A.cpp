#include <iostream> 
#include <algorithm>

using namespace std;
 
int main(){
 

    int n, k, l, c, d, p, nl, np;

    cin >> n>> k>> l>> c>> d>> p>> nl>> np;
	
    int drink = k*l;
    drink /= nl;
    int lime = c * d;
    int toast = p/np;
    int temp = min(drink, lime);
    temp = min(temp, toast);
    temp /=n;
    cout << temp << endl ;
    return 0;
	
}
