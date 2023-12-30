#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n*7];
    for(int i = 0; i < n * 7; i++)
        cin >> arr[i];
    int *result = new int[n];
    for(int i = 0; i < n; i++)
        result[i] = 0;
    int currentSum = 0;
    for(int i = 0; i < (n * 7); i++)
        result[i/7] += arr[i];
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
}