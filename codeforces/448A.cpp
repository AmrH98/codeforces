#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int a1, a2, a3, b1, b2, b3, num;

    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> num;
    
    double cup = a1 + a2 + a3;
    double medal = b1 + b2 + b3;
    if (num < 2 && cup > 0 && medal > 0)
    {
        cout << "NO" << endl;
        return 0;
    } 
     else if (cup == 0 && medal == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    num -= ceil(cup / 5) ;
    int temp = ceil(medal / 10);
    if (num < temp || num < 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
