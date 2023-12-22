#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    long long total = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(abs(arr[j] - arr[i]) >= k) {
                total += n - arr[i] + 1;
                break;
            }
        }
    } cout << total << '\n';
}