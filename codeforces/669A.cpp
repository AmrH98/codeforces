#include <iostream> 
#include <algorithm>
#include <cctype>

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; i++)
#define rforn(i,a,b) for(int i=b; i>=a; i--)
typedef long long int ll;
 
int main(){
 
 
    int foo;
    cin>>foo;
    if(foo % 3 == 0){
        cout << (foo / 3 * 2 ) << endl;
        return 0;
    }
    cout << (foo / 3 * 2 + 1)  << endl;
    return 0;
	
}
