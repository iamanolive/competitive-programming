#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        int *arr = new int[n];
        int *sorted = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            sorted[j] = arr[j];
        } sort(sorted, sorted + n);
        string result = "YES";
        for(int j = 0; j < n; j++)
            if(sorted[j] != arr[j]) result = "NO";
        if(k > 1) cout << "YES" << endl;
        else cout << result << endl; 
    }
}