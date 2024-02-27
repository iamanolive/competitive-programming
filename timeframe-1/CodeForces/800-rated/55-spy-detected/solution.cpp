#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        int index = -1;
        for(int j = 0; j < n; j++) {
            if(j == 0 && arr[j] != arr[j + 1] && arr[j] != arr[j + 2] && arr[j + 1] == arr[j + 2]) {
                index = j + 1;
                break;
            } else if(j == n - 1 && arr[j] != arr[j - 1] && arr[j] != arr[j - 2] && arr[j - 1] == arr[j - 2]) {
                index = j + 1;
                break;
            } else if(arr[j] != arr[j - 1] && arr[j] != arr[j + 1] && arr[j - 1] == arr[j + 1]) {
                index = j + 1;
                break;
            }
        } cout << index << endl;
    }
}