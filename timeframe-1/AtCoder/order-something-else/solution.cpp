#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, p, q; 
    cin >> n >> p >> q;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << min(p, (q + arr[0])) << '\n';
}