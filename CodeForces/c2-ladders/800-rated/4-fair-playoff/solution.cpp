#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int *arr = new int[4];
        int *sorted = new int[4];
        for(int j = 0; j < 4; j++) {
            cin >> arr[j];
            sorted[j] = arr[j];
        } sort(sorted, sorted + 4);
        if((sorted[3] == arr[0] || sorted[3] == arr[1]) && (sorted[2] == arr[0] || sorted[2] == arr[1]))
            cout << "NO" << endl;
        else if((sorted[3] == arr[2] || sorted[3] == arr[3]) && (sorted[2] == arr[2] || sorted[2] == arr[3]))
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}