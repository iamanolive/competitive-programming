#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r; cin >> r;
    cout << fixed << setprecision(6) << 3.141593 * (r * r) << endl;
    cout << fixed << setprecision(6) << r * 2 * r << endl;
}