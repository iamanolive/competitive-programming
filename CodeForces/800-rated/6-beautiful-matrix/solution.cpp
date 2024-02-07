#include <iostream>
using namespace std;
#define endl '\n'

int main() {

    int desiredX = 2, desiredY = 2;
    int currentX, currentY;
    
    int matrix[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                currentX = j;
                currentY = i;
            }
        }
    } cout << abs(currentX - desiredX) + abs(currentY - desiredY) << endl;

}