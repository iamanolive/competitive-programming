#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    int highestBridge = -1;
    int highestLength = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > highestLength) {
            highestBridge = i + 1;
            highestLength = arr[i];
        }
    } cout << highestBridge << '\n';
}