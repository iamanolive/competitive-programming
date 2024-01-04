#include <iostream>
using namespace std;

int main() {
    string line1, line2; cin >> line1 >> line2;
    int line1point1 = (line1[0] - 64) % 5;
    int line1point2 = (line1[1] - 64) % 5;
    int line2point1 = (line2[0] - 64) % 5;
    int line2point2 = (line2[1] - 64) % 5;
    int d1 = abs(line1point1 - line1point2);
    int d2 = abs(line2point1 - line2point2);
    if((d1 == 1 || d1 == 4) && (d2 == 1 || d2 == 4))
        cout << "Yes\n";
    else if((d1 == 2 || d1 == 3) && (d2 == 2 || d2 == 3))
        cout << "Yes\n";
    else
        cout << "No\n";
}