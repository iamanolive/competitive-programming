#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 1; i < n; i++)
        if(arr[i] == arr[i - 1])
            arr[i - 1] = 0;
    sort(arr, arr + n);
    cout << arr[n - 2] << '\n';
}