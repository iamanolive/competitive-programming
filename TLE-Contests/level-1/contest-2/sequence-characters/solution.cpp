#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string s; cin >> s;
        string result = "";
        for(int j = 0; j < s.length(); j++) {
            if(j == 0 && s[j] != s[j + 1]) result += s[j];
            else if(j == s.length() - 1 && s[j] != s[j - 1]) result += s[j];
            else if(s[j] != s[j - 1] && s[j] != s[j + 1]) result += s[j];
        } vector<int> alphabets(26, 0);
        for(int j = 0; j < s.length(); )
            alphabets[int(s[j]) - 97] += 1;
        for(int j = 0; j < 26; j++)
            if(alphabets[j] % 2 != 0) result += char(j + 97);
        sort(result.begin(), result.end());
        for(int j = 0; j < result.length(); j++) {
            if(j == 0 && result[j] == result[j + 1]) result.erase(j, 1);
            else if(j == result.length() - 1 && result[j] == result[j - 1]) result.erase(j, 1);
            else if(result[j] == result[j + 1] || result[j] == result[j - 1]) result.erase(j, 1);
        } cout << result << endl;
    }
}