#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int *arrA = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arrA[i];
    sort(arrA, arrA + n);
    int *arrB = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arrB[i];
    sort(arrB, arrB + n);
    bool areEqual = true;
    for(int i = 0; i < n; i++) {
        if(arrA[i] != arrB[i]) {
            areEqual = false;
            break;
        }
    } if(areEqual) cout << "yes\n";
    else cout << "no\n";
}