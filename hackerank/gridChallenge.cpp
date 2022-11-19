#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


string gridChallenge(vector<string> grid) {
    int temp=0;
    vector<int> ans;
    string word;
    for(int i=0; i<grid.size(); i++){
        word= grid[i];
        temp = 0;
        for(int j=0; j<word.size();j++){
            temp += word[j];
        }
        ans.push_back(temp);
    }
    for(int i=0; i<ans.size()-1; i++){
        if(ans[i] > ans[i+1]) return "NO";
    }
    return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

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
