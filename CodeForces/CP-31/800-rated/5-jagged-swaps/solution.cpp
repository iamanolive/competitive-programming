#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        int *sorted = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            sorted[j] = arr[j];
        } sort(sorted, sorted + n);
        bool isSorted = true;
        for(int j = 0; j < n; j++)
            if(sorted[j] != arr[j]) isSorted = false;
        if(isSorted) cout << "YES" << endl;
        else if(arr[0] == 1 && arr[n - 1] == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}