#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        for(int j = 1; j < s.length(); j++) {
            if(s[j] == s[j - 1]) {
                s.erase(j, 1);
                j = max(j - 2, 0);
            }
        } bool arr[26];
        for(int j = 0; j < 26; j++)
            arr[j] = false;
        string result = "YES";
        for(int j = 0; j < s.length(); j++) {
            if(arr[s[j] - 65] == true) {
                result = "NO";
                break;
            } else arr[s[j] - 65] = true;
        } cout << result << endl;
    }
}