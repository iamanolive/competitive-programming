#include <iostream>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++)
        s[i] = tolower(s[i]);
    cout << s << endl;
    sort(s.begin(), s.end());
    cout << s << endl;
    string result = "YES";
    for(int i = 0; i < 26; i++) {
        char x = i + 97;
        if(find(s.begin(), s.end(), x) == s.end()) {
            result = "NO";
            break;
        }
    } cout << result << endl;
}