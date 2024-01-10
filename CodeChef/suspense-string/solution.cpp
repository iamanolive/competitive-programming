#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        string t = "";
        int alice;
        if(n % 2 == 0) alice = n/2;
        else alice = n/2 + 1;
        while(true) {
            if(s.length() > 0) {
                if(s[0] == '0') t = '0' + t;
                else if(s[0] == '1') t += '1';
                s.erase(s.begin());
            } if(s.length() > 0) {
                if(s[s.length() - 1] == '0') t += '0';
                else if(s[s.length() - 1] == '1') t = '1' + t;
                s.erase(s.begin() + (s.length() - 1));
            } else break;
        } cout << t << endl;
    }
}