#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int num, q, grade;
    string name;
    map<string, int> stud;
    cin >> num;
    for(int i =0; i<num; i++){
        cin >> q;
        if(q==1){
            cin>>name>>grade;
            stud[name] += grade;
        } else if(q==2){
            cin>>name;
            stud.erase(name);
        } else{
            cin>>name;

                cout << stud[name] << endl;
        }
    }
    return 0;
}



