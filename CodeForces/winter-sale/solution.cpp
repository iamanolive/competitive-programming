#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, p; cin >> x >> p;
    cout << setprecision(10) << (100 * p) / (100 - x) << '\n';
}