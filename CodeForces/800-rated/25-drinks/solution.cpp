#include <iostream>
#include <iomanip>

using namespace std;
#define endl '\n'


int main() {
    int n; cin >> n;
    int *drinks = new int[n];
    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> drinks[i];
        sum += drinks[i];
    } cout << fixed << setprecision(5) << sum / n << endl;
}