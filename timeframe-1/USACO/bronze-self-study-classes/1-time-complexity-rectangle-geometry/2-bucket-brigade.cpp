#include <iostream>
using namespace std;

int main() {
    
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    int barnX, barnY, rockX, rockY, lakeX, lakeY;
    
    string *farm = new string[10];
    for(int i = 0; i < 10; i++) {
        cin >> farm[i];
        for(int j = 0; j < 10; j++) {
            if(farm[i][j] == 'B') {
                barnX = j;
                barnY = i;
            } else if(farm[i][j] == 'L') {
                lakeX = j;
                lakeY = i;
            } else if(farm[i][j] == 'R') {
                rockX = j;
                rockY = i;
            }
        }
    } if(barnX == lakeX && barnX == rockX && rockY > min(lakeY, barnY) && rockY < max(lakeY, barnY)) cout << abs(barnY - lakeY) + 1 << endl;
    else if(barnY == lakeY && barnY == rockY && rockX > min(lakeX, barnX) && rockX < max(lakeX, barnX)) cout << abs(barnX - lakeX) + 1 << endl;
    else cout << abs(barnX - lakeX) + abs(barnY - lakeY) - 1 << endl;
}