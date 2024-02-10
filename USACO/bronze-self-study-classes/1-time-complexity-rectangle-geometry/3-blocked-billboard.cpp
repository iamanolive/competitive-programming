#include <iostream>
using namespace std;
#define endl '\n'


int main() {
    bool grid[2001][2001];
    int totalArea = 0;

    for(int index = 0; index < 2; index++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000; x2 += 1000; y1 += 1000; y2 += 1000;
        for(int i = x1; i < x2; i++) {
            for(int j = y1; j < y2; j++) {
                grid[i][j] = true;
                totalArea++;
            }
        }
    }

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000; x2 += 1000; y1 += 1000; y2 += 1000;
    for(int i = x1; i < x2; i++)
        for(int j = y1; j < y2; j++)
            if(grid[i][j] == true) totalArea--;
    
    cout << totalArea << endl;
}