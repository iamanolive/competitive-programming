#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b; cin >> a >> b;
    double quotient = a/b;
    cout << "floor " << a << " / " << b << " = " << floor(quotient) << '\n';
    cout << "ceil " << a << " / " << b << " = " << ceil(quotient) << '\n';
    cout << "round " << a << " / " << b << " = " << round(quotient) << '\n';
}