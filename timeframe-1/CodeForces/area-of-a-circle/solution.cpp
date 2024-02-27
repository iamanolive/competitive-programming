#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r; cin >> r;
    const double pi = 3.141592653;
    cout << setprecision(9) << pi * r * r << '\n';
}