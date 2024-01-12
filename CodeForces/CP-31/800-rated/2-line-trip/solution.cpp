#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, x; cin >> n >> x;
        int *arr = new int[n + 1];
        arr[0] = 0;
        int maxDifference = -1;
        for(int j = 1; j <= n; j++) {
            cin >> arr[j];
            int currentDifference = arr[j] - arr[j - 1];
            if(currentDifference > maxDifference)
                maxDifference = currentDifference;
        } cout << max(maxDifference, 2 * (x - arr[n])) << endl;
    }
}