// find the first occurence of a black cell
// find the last occurrence of a black cell
// last occurrence - first occurrence + 1

#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        int firstOccurrence = -1, lastOccurrence = -1;
        for(int j = 0; j < n; j++) {
            if(s[j] == 'B') {
                firstOccurrence = j;
                break;
            }
        } for(int j = n - 1; j >= 0; j--) {
            if(s[j] == 'B') {
                lastOccurrence = j;
                break;
            }
        } if(firstOccurrence == lastOccurrence && firstOccurrence == -1) cout << 0 << endl;
        else cout << lastOccurrence - firstOccurrence + 1 << endl;
    }
}