#include <iostream>
using namespace std;

int main() {
    int n, l, r; cin >> n >> l >> r;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] <= l) cout << l << " ";
        else if(arr[i] > l && arr[i] < r) cout << arr[i] << " ";
        else cout << r << " ";
    }
}