#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        int hasK = false;
        int *arr = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            if(arr[j] == k) hasK = true;
        } if(hasK) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}