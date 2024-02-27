#include <iostream>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int *arr = new int[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] <= x) sum += arr[i];
    cout << sum << '\n';
}