#include <iostream> 

using namespace std;

int main( )
{
   int num, count = 0;
   char temp;
    cin >> num;
   for(int i =0; i<num; i++){
    cin >> temp;
    if (temp == 'A'){
       count++;
    }
   }
   int d = num - count;
   if (count > d){
    cout << "Anton" << "\n";
   } else if( count == d){
    cout << "Friendship" << "\n";
   }
   else cout << "Danik" << "\n";


   return 0;
}
