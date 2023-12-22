#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int *arr = new int[4];
        int *sortedArr = new int[4];
        for(int j = 0; j < 4; j++) {
            cin >> arr[j];
            sortedArr[j] = arr[j];
        } sort(sortedArr, sortedArr + 4);
        if((arr[0] == sortedArr[2] || arr[0] == sortedArr[3]) && (arr[1] == sortedArr[2] || arr[1] == sortedArr[3])) cout << "NO\n";
        else if((arr[0] == sortedArr[0] || arr[0] == sortedArr[1]) && (arr[1] == sortedArr[0] || arr[1] == sortedArr[1])) cout << "NO\n";
        else cout << "YES\n";
    }
}