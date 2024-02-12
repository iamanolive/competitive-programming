#include <iostream>
#include <climits>

using namespace std;
#define endl '\n'


int main() {
    int n; cin >> n;
    int maxVal = 0, maxInd = 0;
    int minVal = INT_MAX, minInd = 0;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > maxVal) {
            maxVal = arr[i];
            maxInd = i;
        }
    } int counter = 0;
    while(true) {
        if(arr[0] == maxVal) break;
        else swap(arr[maxInd], arr[maxInd - 1]);
        maxInd--; counter++; 
    } for(int i = 0; i < n; i++) {
        if(arr[i] <= minVal) {
            minVal = arr[i];
            minInd = i;
        }
    } while(true) {
        if(arr[n - 1] == minVal) break;
        else swap(arr[minInd], arr[minInd + 1]);
        minInd++; counter++;
    } cout << counter << endl;
}