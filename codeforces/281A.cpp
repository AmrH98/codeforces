#include <iostream> 
#include <algorithm>
#include <cctype>

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; i++)
#define rforn(i,a,b) for(int i=b; i>=a; i--)
typedef long long int ll;
 
int main(){
 
 
    string foo;
    cin>>foo;
    char temp = toupper(foo[0]);
    foo[0] = temp;
    
    cout << foo << endl;
    return 0;
	
}
