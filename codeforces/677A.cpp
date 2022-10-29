#include <iostream> 

using namespace std;

int main( )
{
   int num, h, width = 0;
   int temp;
   cin >>num>>h;
   for(int i =0; i<num; i++){
    cin >> temp;
    if (temp > h){
       width++; 
    }
    width++;
   }

   cout << width<<"\n";

   return 0;
}
