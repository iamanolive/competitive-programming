#include <iostream>
#include <vector>
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
        int smallestFront = -1, smallestBack = -1, largestFront = -1, largestBack = -1;
        for(int j = 0; j < n; j++) {
            if(arr[j] == 1)
                smallestFront = j + 1;
            else if(arr[j] == n)
                largestFront = j + 1;
            if(largestFront > -1 && smallestFront > -1)
                break;
        } smallestBack = 
    }
}