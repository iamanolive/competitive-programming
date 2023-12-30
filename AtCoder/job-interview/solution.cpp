#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    bool poor = false;
    bool good = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'x') poor = true;
        if(s[i] == 'o') good = true;
    } if(good == true && poor == false) cout << "Yes\n";
    else cout << "No\n";
}