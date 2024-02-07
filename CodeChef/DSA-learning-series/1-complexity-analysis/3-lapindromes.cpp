#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string s; cin >> s;
        int n = s.length();
        int *part1 = new int[26];
        int *part2 = new int[26];
        for(int j = 0; j < 26; j++) {
            part1[j] = 0;
            part2[j] = 0;
        } for(int j = 0; j < n/2; j++)
            part1[s[j] - 97]++;
        for(int j = (n+1)/2; j < n; j++)
            part2[s[j] - 97]++;
        string result = "YES";
        for(int j = 0; j < 26; j++) {
            if(part1[j] != part2[j]) {
                result = "NO";
                break;
            }
        } cout << result << endl;
    }
}