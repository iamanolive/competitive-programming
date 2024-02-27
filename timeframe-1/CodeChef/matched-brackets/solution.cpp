#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *brackets = new int[n];
    for(int i = 0; i < n; i++)
        cin >> brackets[i];
    int maxCounter = -1;
    int maxIndex = -1;
    int currentCounter = 0;
    int currentIndex = 0;
    int currentNum = brackets[0];
    for(int i = 1; i < n; i++) {
        if(currentNum == brackets[i])
            currentCounter++;
        else {
            if(currentCounter > maxCounter) {
                maxCounter = currentCounter;
                maxIndex = currentIndex + 1;
            } currentCounter = 1;
            currentIndex = i;
            currentNum = brackets[i];
        }
        if(i == n - 1) {
            if(currentCounter > maxCounter) {
                maxCounter = currentCounter;
                maxIndex = currentIndex + 1;
            }
        }
    } cout << maxCounter << " " << maxIndex << " ";
}