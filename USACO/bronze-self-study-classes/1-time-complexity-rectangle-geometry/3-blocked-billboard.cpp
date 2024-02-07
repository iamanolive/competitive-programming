#include <iostream>
using namespace std;

int main() {

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, y1, x2, y2; // billboard 1
    cin >> x1 >> y1 >> x2 >> y2;

    int x3, y3, x4, y4; // billboard 2
    cin >> x3 >> y3 >> x4 >> y4;

    int x5, y5, x6, y6; // truck
    cin >> x5 >> y5 >> x6 >> y6;

    long long b1x = 0, b1y = 0;
    long long b2x = 0, b2y = 0;


    // amount of billboard 1 covered by truck
    if((x5 >= x1 && x5 <= x2) || (x6 <= x2 && x6 >= x1)) b1x = abs(max(x1, x5) - min(x2, x6)); 
    if((y5 >= y1 && y5 <= y2) || (y6 <= y2 && y6 >= y1)) b1y = abs(max(y1, y5) - min(y2, y6));

    // amount of billboard 2 covered by truck
    if((x5 >= x3 && x5 <= x4) || (x6 <= x4 && x6 >= x3)) b2x = abs(max(x3, x5) - min(x4, x6));
    if((y5 >= y3 && y5 <= y4) || (y6 <= y4 && y6 >= y3)) b2y = abs(max(y3, y5) - min(y4, y6));
    
    long long b1 = ((x2 - x1) * (y2 - y1)) - (b1x * b1y);
    long long b2 = ((x4 - x3) * (y4 - y3)) - (b2x * b2y);

    cout << b1 + b2 << endl;
}