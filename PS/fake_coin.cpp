#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

int compareCoins(int lines){
    /* Compare a number of coins and detect if there's is a fake coin or not
     * Constraints: only one fake coin available or NONE
     * the program get int value of inputs when the program detects more than 1 fake coin...
     * it returns "data inconsistent" error and does not complete the rest of provided comparisons
     * input 1 and 2: any char(a-z) or numbers, input 3: "equal, right, left"
     * no constraints put for input 1 and 2, input 3 accepts the following values only
     */
    char left, right;
    string scale;
    vector<char>good;
    vector<char>fake;
    while(lines>0){
        cout << "Enter both coins to be compared and the result ( NO CAPS ): "<< endl;
        cin >> left >> right >> scale;
        if (fake.size() > 1){
            cout << "Data inconsistent"<< endl;
            return 0;
        }
            if (scale == "equal"){
                good.push_back(right);
                good.push_back(left);
//                if any of the good coins available in the fake coins array then more the 1 fake coin is available
                for (int i =0; i<fake.size(); i++){
                    if (right == fake[i] || left == fake[i]){
                        cout << "Data inconsistent"<< endl;
                        return 0;
                    }
                }
            }
            else if ((scale == "left")){
                fake.push_back(left);
//                 if the fake coin available in the good coins array then more the 1 fake coin is available
                for (int i =0; i<good.size(); i++){
                    if (left == good[i]){
                        cout << "Data inconsistent"<< endl;
                        return 0;
                    }
                }
            }
            else if ((scale == "right")){
                fake.push_back(right);
//                 if the fake coin available in the good coins array then more the 1 fake coin is available
                for (int i =0; i<good.size(); i++){
                    if (right == good[i]){
                        cout << "Data inconsistent"<< endl;
                        return 0;
                    }
                }
            }
        lines--;
    }
    if (fake.size() == 0){
        cout<< "no fake coins"<< endl;
    }
    else{
        cout << fake[0] << " is lighter";
    }

}


int main() {
    int lines; //get number of comparisons
    cout << " Enter number of comparisons: ";
    cin >> lines;
    compareCoins(lines);
    return 0;
}

