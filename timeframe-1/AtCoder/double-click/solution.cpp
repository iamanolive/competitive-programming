#include <iostream>
using namespace std;

int main() {
    int n, d; cin >> n >> d;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int num = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] <= d) {
            num = arr[i];
            break;
        }
    } cout << num << '\n';
}