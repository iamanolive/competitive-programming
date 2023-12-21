#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    bool isHard = false;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1)
            isHard = true;
    } if(isHard) cout << "HARD\n";
    else cout << "EASY\n";
}