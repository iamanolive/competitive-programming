#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *binary = new int[n];
        int counter = 0;
        int maxCounter = 0;
        for(int j = 0; j < n; j++) {
            cin >> binary[j];
            if(binary[j] == 0) counter++;
            else if(binary[j] == 1) {
                if(counter > maxCounter)
                    maxCounter = counter;
                counter = 0;
            }
        } cout << max(counter, maxCounter) << endl;
    }
}