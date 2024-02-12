#include <iostream>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        // if difference between two consecutive elements in the sorted array is greater than or equal to 2, YES
        // otherwise the result is NO
        sort(arr, arr + n);
        string result = "YES";
        for(int j = 1; j < n; j++) {
            if(arr[j] - arr[j - 1] > 1) {
                result = "NO";
                break;
            }
        } cout << result << endl;
    }
}