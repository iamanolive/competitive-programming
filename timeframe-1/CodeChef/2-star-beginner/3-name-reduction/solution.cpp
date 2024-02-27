#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string a, b; cin >> a >> b;
        string str = a + b;
        string result = "YES";
        int n; cin >> n;
        for(int j = 0; j < n; j++) {
            string c; cin >> c;
            for(int k = 0; k < c.length(); k++) {
                if(str.find(c[k]) == string::npos)
                    result = "NO";
                else str.erase(str.find(c[k]), 1);
            }
        } cout << result << endl;
    }
}