#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        int number = 1;
        for(int j = 0; j < n; j++) {
            if(number % 3 == 0 || number % 10 == 3) j--;
            else arr[j] = number;
            number++;
        } cout << arr[n-1] << '\n';
    }
}