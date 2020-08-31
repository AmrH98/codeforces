#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr ll mod = 1e9 + 7;
#define endl '\n'
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
 
  string s;
  cin >> s;
 
  vector<bool> is_vowel(128);
  is_vowel['a'] = is_vowel['e'] = is_vowel['i'] = is_vowel['o'] = is_vowel['u'] = true;
  is_vowel['A'] = is_vowel['E'] = is_vowel['I'] = is_vowel['O'] = is_vowel['U'] = true;
  is_vowel['y'] = is_vowel['Y'] = true;
  string s2;
  int n = s.length();
  for (int i = 0; i < n; ++i) {
    if (is_vowel[s[i]]) continue;
    s2 += '.';
    s2 += tolower(s[i]);
  }
  
  cout << s2 << endl;
 
