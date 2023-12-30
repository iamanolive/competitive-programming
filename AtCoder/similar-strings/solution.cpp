#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    string t; cin >> t;
    string result = "Yes";
    for(int i = 0; i < n; i++) {
        if(s[i] == t[i]) continue;
        
        else if(s[i] == '0' && t[i] == 'o') continue;
        else if(s[i] == 'o' && t[i] == '0') continue;

        else if(s[i] == 'l' && t[i] == '1') continue;
        else if(s[i] == '1' && t[i] == 'l') continue;
        
        else result = "No";
        if(result == "No") break;
    } cout << result << '\n';
}