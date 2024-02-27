#include <iostream>
using namespace std;
#define endl '\n'

string solve(int n, int x, string s) {
    int remainingSwipes = 0;
    if(s[0] == '0') return "NO";
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') remainingSwipes -= 1;
        else if(s[i] == '1') remainingSwipes = x;
        if(remainingSwipes < 0) return "NO";
    } return "YES";
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, x; cin >> n >> x;
        string s; cin >> s;
        cout << solve(n, x, s) << endl;
    } 
}