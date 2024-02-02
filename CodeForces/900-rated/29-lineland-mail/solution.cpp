#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *cities = new int[n];
    for(int i = 0; i < n; i++)
        cin >> cities[i];
    cout << abs(cities[0] - cities[1]) << " " << abs(cities[0] - cities[n-1]) << endl;
    for(int i = 1; i < n - 1; i++) {
        long long d1 = min(abs(cities[i] - cities[i-1]), abs(cities[i] - cities[i+1]));
        long long d2 = max(abs(cities[i] - cities[0]), abs(cities[i] - cities[n-1]));
        cout << min(d1, d2) << " " << max(d1, d2) << endl;
    } cout << abs(cities[n-1] - cities[n-2]) << " " << abs(cities[n-1] - cities[0]) << endl;
}