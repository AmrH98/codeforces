#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string caesarCipher(string s, int k) {
    string ans;
    char temp; 
    int charac; 
    for (char z: s){
        charac =z; // char to integer 
        k %=26; // (total alphabateic chars),know if exactly the increment
        if(charac>=97 && charac<=122){ // lower 
            (charac+k>122)?(charac+=(k-122+97-1)):(charac+=k);
        }else if(charac>=65 && charac<=90){ // upper
            (charac+k>90)?(charac+=(k-90+65-1)):(charac+=k);
        }
        ans +=charac;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
