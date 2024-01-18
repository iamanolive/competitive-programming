#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    int *sorted = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sorted[i] = arr[i];
    } sort(sorted, sorted + n, greater<int>());
    vector<int> result;
    long long minCost = 0;
    int x = 0;
    for(int i = 0; i < n; i++) {
        minCost += sorted[i] * x + 1;
        int itr = find(arr, arr + n, sorted[i]) - arr;
        result.push_back(itr);
        arr[itr] = -1;
        x += 1;
    } cout << minCost << endl;
    for(auto element : result)
        cout << element + 1 << " ";
    cout << endl;
}