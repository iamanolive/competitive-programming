#include <iostream>
using namespace std;

int main() {

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int r1x1, r1y1, r1x2, r1y2;
    cin >> r1x1 >> r1y1 >> r1x2 >> r1y2;
    int r2x1, r2y1, r2x2, r2y2;
    cin >> r2x1 >> r2y1 >> r2x2 >> r2y2;
    int maxX = max(r1x1, max(r1x2, max(r2x1, r2x2)));
    int minX = min(r1x1, min(r1x2, min(r2x1, r2x2)));
    int maxY = max(r1y1, max(r1y2, max(r2y1, r2y2)));
    int minY = min(r1y1, min(r1y2, min(r2y1, r2y2)));
    int result = max(maxX - minX, maxY - minY);
    cout << result * result << endl;
}