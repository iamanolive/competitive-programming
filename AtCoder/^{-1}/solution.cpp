#include <iostream>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int result = -1;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == x)
            result = i + 1;
    } cout << result << '\n';
}