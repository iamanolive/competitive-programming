#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int even = 0, odd = 0;
    int positive = 0, negative = 0;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) even++;
        else odd++;
        if(arr[i] > 0) positive++;
        else if(arr[i] < 0) negative++;
    } cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << positive << '\n';
    cout << "Negative: " << negative << '\n';
}