#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        int minDiff = INT_MAX;
        for(int j = 1; j < n; j++)
            if(arr[j] - arr[j - 1] < minDiff)
                minDiff = arr[j] - arr[j - 1];
        if(minDiff < 0) cout << 0 << endl;
        else cout << (minDiff / 2) + 1 << endl;
    }
}