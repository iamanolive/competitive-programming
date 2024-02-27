#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b; cin >> a >> b;
    double result = ((b / a) * 1000) / 1000;
    if(result == round(result)) cout << fixed << setprecision(3) << result << '\n';
    else if(result < 1) cout << fixed << setprecision(3) << result << '\n';
    else cout << fixed << setprecision(4) << result << '\n';
}