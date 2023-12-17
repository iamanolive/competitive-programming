#include <iostream>
using namespace std;

int main() {
    string x; cin >> x;
    int firstDigit = int(x[0]) - int('0');
    if(firstDigit % 2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";
}