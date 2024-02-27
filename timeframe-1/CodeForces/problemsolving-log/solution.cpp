#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string problems; cin >> problems;
        int *arr = new int[27];
        for(int j = 1; j < 27; j++)
            arr[j] = 0;
        for(int j = 0; j < n; j++)
            arr[int(problems[j]) - 64] += 1;
        int counter = 0;
        for(int j = 1; j < 27; j++) {
            if(arr[j] >= j)
                counter++;
        } cout << counter << '\n';
    }
}