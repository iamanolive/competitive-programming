#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    int result = INT_MAX;
    for(int j = 0; j < n; j++) {
        cin >> arr[j];
        if(abs(arr[j]) < result)
            result = abs(arr[j]);
    } cout << result << endl;
}