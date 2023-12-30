#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    long long counter = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= arr[i]; j++) {
            string iStr = to_string(i + 1);
            sort(iStr.begin(), iStr.end());
            string jStr = to_string(j);
            sort(jStr.begin(), jStr.end());
            if(iStr[0] == iStr[iStr.length() - 1] && jStr[0] == jStr[jStr.length() - 1] && iStr[0] == jStr[0])
                counter++;
        }
    } cout << counter << '\n';
}