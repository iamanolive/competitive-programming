#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if(arr[0] == arr[n - 1])
        cout << "Yes\n";
    else
        cout << "No\n";
}