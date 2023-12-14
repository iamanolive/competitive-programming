#include <iostream>
using namespace std;

int main() {
    int k, g, m;
    cin >> k >> g >> m;
    int currentGlass = 0;
    int currentMug = 0;
    for(int i = 0; i < k; i++) {
        if(currentGlass == g)
            currentGlass = 0;
        else if(currentMug == 0)
            currentMug = m;
        else {
            if(currentMug <= (g - currentGlass)) {
                currentGlass += currentMug;
                currentMug = 0;
            }
            else {
                currentMug -= (g - currentGlass);
                currentGlass = g;
            }
        }
    } cout << currentGlass << " " << currentMug << '\n';
}