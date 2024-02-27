#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    long long *arr = new long long[n];
    // here fib(n) is stored in array[n-1]
    arr[0] = 0;
    if(n > 1)
        arr[1] = 1; // if n == 1, initializing arr[1] will show an index out of bounds error
    for(int i = 2; i < n; i++)
        arr[i] = arr[i-1] + arr[i-2];
    cout << arr[n-1] << '\n';
}