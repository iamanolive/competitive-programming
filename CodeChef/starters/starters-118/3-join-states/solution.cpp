#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m; cin >> n >> m;
        int *A = new int[n];
        int literates = 0;
        int counter = 0;
        for(int j = 0; j < n; j++) {
            cin >> A[j];
            literates += A[j];
            if(literates >= m) {
                counter++;
                literates = 0;
            }
        } cout << counter << endl;
    }
}