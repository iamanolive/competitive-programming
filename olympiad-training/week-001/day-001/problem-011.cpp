#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s; // length = 2 * n
        int goalsA = 0, goalsB = 0;
        int missesA = 0, missesB = 0;
        int result = 2 * n;
        // if s[i] == 0, shot was a miss
        // else if s[i] == 1, shot was a goal
        for(int j = 0; j < 2 * n; j++) {
            if(j % 2 == 0 && s[j] == '1') goalsA++;
            else if(j % 2 == 0 && s[j] == '0') missesA++;
            else if(j % 2 != 0 && s[j] == '1') goalsB++;
            else if(j % 2 != 0 && s[j] == '0') missesB++;
            if(goalsA >= n - 1 && missesB >= 2) {
                result = j + 1;
                break;
            } else if(goalsB >= n - 1 && missesA >= 2) {
                result = j + 1;
                break;
            }
        } cout << result << endl;
    }
}