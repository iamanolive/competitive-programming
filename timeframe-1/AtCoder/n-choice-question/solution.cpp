#include <iostream>
using namespace std;

int main() {
    int n, a, b; cin >> n >> a >> b;
    int c = a + b;
    int result = -1;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == c) result = i + 1;
    }
}