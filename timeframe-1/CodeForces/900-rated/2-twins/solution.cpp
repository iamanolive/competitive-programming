#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int sum1 = 0;
    for(int i = 0; i < n - 1; i++)
        sum1 += arr[i];
    int sum2 = arr[n-1];
    int idx = n - 2;
    int counter = 1;
    while(idx >= 0) {
        if(sum2 > sum1) break;
        sum2 += arr[idx];
        sum1 -= arr[idx];
        idx--;
        counter++;
    } cout << counter << endl;
}