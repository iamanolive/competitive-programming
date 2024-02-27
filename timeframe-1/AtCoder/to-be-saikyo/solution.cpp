#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    int *duplicate = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    copy(arr, arr + n, duplicate);
    sort(duplicate, duplicate + n);
    if(duplicate[n - 1] == arr[0]) {
        if(duplicate[n - 1] == duplicate[n - 2])
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    } else cout << duplicate[n - 1] - arr[0] + 1 << '\n';
}