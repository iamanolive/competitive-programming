# 5. Jagged Swaps

* problem 5 of the tle CP-31 sheet (the 800-rated page)
* codeTON round 7 (div 1 + div 2) problem A
* link to problem: https://codeforces.com/problemset/problem/1896/A

## Solution Notes

* permutation A of size N
* you can select an index i from 2 to (n - 1) such that A[i] > A[i-1] and A[i] > A[i+1], and swap A[i] with A[i+1]
* is it possible to sort the permutation after a finite number of operations
* print YES only if arr[0] == 1. in all other cases, print NO, because by no operation can the smallest number be moved to the first position if it isn't already in it
* the more optimized solution (runs in O(1)) time would be:

```cpp

#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        if(arr[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

```