#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    int officers = 0;
    int untreated = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > 0) officers += arr[i];
        else if(arr[i] == -1) {
            if(officers > 0) officers -= 1;
            else untreated++;
        }
    } cout << untreated << endl;
}