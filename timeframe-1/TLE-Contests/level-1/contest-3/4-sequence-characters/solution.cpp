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
            if(j == s.length() - 1 && s[j] != s[j - 1]) {
                result += s[j];
                break;
            }
            else if(s[j] == s[j + 1]) {
                s[j] = '0';
                s[j + 1] = '0';
            } else if(s[j] != '0') result += s[j];
        } sort(result.begin(), result.end());
        string answer = "" + result[0];
        for(int j = 0; j < result.length(); j++)
            if(result[j] != answer[answer.length() - 1])
                answer += result[j];
        cout << answer << endl;
    }
}