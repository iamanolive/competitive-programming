#include <iostream>
#include <algorithm>
using namespace std;

string solve(int n, int *A) {
    if(n == 4 && A[0] + A[1] == A[2] + A[3]) return "NO";
    if(n == 4) return "YES";
    
    int *duplicateArray = A;
    sort(duplicateArray, duplicateArray + n);
    if(duplicateArray[0] == duplicateArray[n-1]) return "NO";
    
    bool alternates1 = true, alternates2 = true;
    for(int j = 0; j < n; j += 2) {
        if(A[j] != A[j+2]) {
            alternates1 = false;
            break;
        }
    }
    for(int j = 1; j < n; j += 2) {
        if(A[j] != A[j+2]) {
            alternates2 = false;
            break;
        }
    } if(alternates1 && alternates2) return "NO";
    return "YES";
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *A = new int[n];
        for(int j = 0; j < n; j++)
            cin >> A[j];
        cout << solve(n, A) << '\n';
    }
}