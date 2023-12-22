#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    long long total = 0;
    for(int i = 0; i < (n - 1); i++) {
        for(int j = (i + 1); j < n; j++)
            total += abs(arr[i] - arr[j]);
    } cout << total << '\n';
}