#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int *arr = new int[m];
    for(int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    int mini = INT_MAX;
    for(int i = 0; i <= m - n; i++) {
        if(abs(arr[i] - arr[i + n - 1]) < mini)
            mini = abs(arr[i] - arr[i + n - 1]);
    } cout << mini << endl;
}