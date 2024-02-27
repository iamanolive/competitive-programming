#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i % 2 == 0) cout << '#';
            else if((i + 1) % 4 == 0 && j == 0) cout << '#';
            else if((i + 1) % 2 == 0 && (i + 1) % 4 != 0 && j == m - 1) cout << '#';
            else cout << '.';
        } cout << endl;
    }
}