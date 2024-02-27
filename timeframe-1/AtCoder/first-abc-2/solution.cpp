#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int position = -1;
    for(int i = 0; i < (n - 2); i++) {
        if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
            position = i;
            break;
        }
    } cout << position << '\n';
}