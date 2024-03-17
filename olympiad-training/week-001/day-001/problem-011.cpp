#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        int goalsA = 0;
        int goalsB = 0;
        int shotsA = 0;
        int shotsB = 0;
        int result = 2 * n;
        for(int j = 0; j < 2 * n; j++) {
            if(j % 2 == 0) {
                shotsA++;
                if(s[j] == '1') goalsA++;
            } else if(j % 2 != 0) {
                shotsB++;
                if(s[j] == '1') goalsB++;
            }
            if(goalsA > (goalsB + (n - shotsB))) {
                result = j + 1;
                break;
            } else if(goalsB > (goalsA + (n - shotsA))) {
                result = j + 1;
                break;
            }
        } cout << result << endl;
    }
}