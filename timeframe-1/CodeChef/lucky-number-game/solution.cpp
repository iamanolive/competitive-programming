#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, bob, alice;
        cin >> n >> bob >> alice;
        int *arr = new int[n];
        int divbyalice = 0;
        int divbybob = 0;
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            if(arr[j] % alice == 0 && arr[j] % bob != 0) divbyalice++;
            if(arr[j] % bob == 0) divbybob++;
        } if(divbyalice > divbybob) cout << "ALICE" << endl;
        else if(divbyalice < divbybob) cout << "BOB" << endl;
        else cout << "ALICE" << endl;
    }
}