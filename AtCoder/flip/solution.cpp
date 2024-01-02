#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    string result = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') result += '0';
        else if(s[i] == '0') result += '1';
    } cout << result << '\n';
}