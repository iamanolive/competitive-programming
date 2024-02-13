#include <iostream>
#include <cmath>

using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int richest = -1;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > richest) richest = arr[i];
    } long long sum = 0;
    for(int i = 0; i < n; i++)
        sum += richest - arr[i];
    cout << sum << endl;
}