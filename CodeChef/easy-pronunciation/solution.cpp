#include <bits/stdc++.h>
using namespace std;

string hardOrEasy(int length, string str) {
    int currentCount = 0;
    for(int i = 0; i < length; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') currentCount++;
        else currentCount = 0;
        if(currentCount >= 4) return "NO";
    } return "YES";
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        cout << hardOrEasy(n, s) << '\n';
    }
}