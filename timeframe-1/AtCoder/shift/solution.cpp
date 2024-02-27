#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = k; i < n; i++)
        cout << arr[i] << " ";
    for(int i = 0; i < min(n, k); i++)
        cout << 0 << " ";
    cout << endl;
}