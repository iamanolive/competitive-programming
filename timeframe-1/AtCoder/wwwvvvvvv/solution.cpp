#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int bottomCount = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'v') bottomCount++;
        else if(s[i] == 'w') bottomCount += 2;
    } cout << bottomCount << '\n';
}