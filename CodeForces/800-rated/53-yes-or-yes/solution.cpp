#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string s; cin >> s;
        for(int j = 0; j < s.length(); j++)
            s[j] = tolower(s[j]);
        if(s == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}