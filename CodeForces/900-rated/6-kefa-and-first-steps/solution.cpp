#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *earnings = new int[n];
    for(int i = 0; i < n; i++)
        cin >> earnings[i];
    int counter = 1, maxCounter = 1;
    for(int i = 1; i < n; i++) {
        if(earnings[i] >= earnings[i - 1]) counter++;
        if(counter > maxCounter) maxCounter = counter;
        if(earnings[i] < earnings[i - 1]) counter = 1;
    } cout << maxCounter << endl;
}