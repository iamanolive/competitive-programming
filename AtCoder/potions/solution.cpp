#include <iostream>
using namespace std;

int main() {
    int n, h, x; cin >> n >> h >> x;
    int *potions = new int[n];
    int potionIndex = -1;
    for(int i = 0; i < n; i++)
        cin >> potions[i];
    for(int i = 0; i < n; i++) {
        if(potions[i] >= (x - h)) {
            potionIndex = i + 1;
            break;
        }
    } cout << potionIndex << '\n';
}