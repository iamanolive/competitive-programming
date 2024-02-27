#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *A = new int[n];
        for(int j = 0; j < n; j++)
            cin >> A[j];
        int *reverse = new int[n];
        for(int j = 0; j < n; j++)
            reverse[j] = n - j;
        for(int j = 0; j < n; j++)
            cout << reverse[A[j] - 1] << " ";
        cout << endl;
    }
}