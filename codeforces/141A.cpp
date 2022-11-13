#include <iostream> 
#include <algorithm>
#include <cctype>

using namespace std;
 
#define forn(i,a,b) for(int i=a; i<b; i++)
#define rforn(i,a,b) for(int i=b; i>=a; i--)
typedef long long int ll;
 
int main(){
 
 
    string foo[3];
    forn(i,0,3){
        cin>>foo[i];
    }
    string temp = foo[0]+foo[1];
    sort(temp.begin(), temp.end());
    sort(foo[2].begin(), foo[2].end());

    if(temp == foo[2]) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;

    return 0;
	
}
