#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, x; cin >> n >> x;
        int *arr = new int[n + 1];
        arr[0] = 0;
        int maxDist = -1;
        for(int j = 1; j <= n; j++) {
            cin >> arr[j];
            if(abs(arr[j] - arr[j - 1]) > maxDist)
                maxDist = abs(arr[j] - arr[j - 1]);
        } cout << max(maxDist, 2 * (x - arr[n])) << endl;
    }
}