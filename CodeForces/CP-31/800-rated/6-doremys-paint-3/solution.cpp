#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        int counter = 1;
        sort(arr, arr + n);
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] != arr[j + 1]) counter++;
        } if(counter > 2) cout << "No" << endl;
        else if(counter == 1) cout << "Yes" << endl;
        else {
            int num1 = 0;
            int num2 = 0;
            for(int j = 0; j < n; j++) {
                if(arr[j] == arr[0]) num1++;
                else if(arr[j] == arr[n - 1]) num2++;
            } if(abs(num1 - num2) <= 1) cout << "Yes" << endl;
            else cout << "No" << endl; 
        }
    }
}