#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    vector<bool> index(26, false);
    int temp;
    int size = s.size();
    for(int i =0; i<size;i++){
        if('A' <= s[i] && 'Z' >= s[i]){
            temp = s[i] - 'A';
        } else {
            temp = s[i] - 'a';
        }
        index[temp] = true;
    }
    for(int i =0; i<26;i++){
        if(index[i] == false){
            return "not panagram";
        }
    }
    return "panagram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
