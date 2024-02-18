#include <iostream>
#include <climits>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        long long maxProduct = INT_MIN;
        int x; cin >> x;
        arr[0] = x;
        for(int j = 1; j < n; j++) {
            cin >> arr[j];
            maxProduct = max(maxProduct, (long long) arr[j] * arr[j - 1]);
        }
        cout << maxProduct << endl;
    }
}