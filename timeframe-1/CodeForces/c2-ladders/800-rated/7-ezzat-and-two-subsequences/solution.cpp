#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *sequence = new int[n];
        for(int j = 0; j < n; j++)
            cin >> sequence[j];
        sort(sequence, sequence + n);
        double sum = 0;
        for(int j = 0; j < n - 1; j++)
            sum += sequence[j];
        cout << fixed << setprecision(9) << sum / (n - 1) + sequence[n - 1] << endl;
    }
}