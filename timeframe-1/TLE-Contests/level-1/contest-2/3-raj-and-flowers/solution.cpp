#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string t; cin >> t;
    int position = 0;
    int index = 0;
    while(true) {
        if(s[position] == t[index]) {
            position++; index++;
        } else index++;
        if(index > t.length() || position > s.length())
            break;
    } cout << position + 1 << endl;
}