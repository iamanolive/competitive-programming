#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *maxSpeed = new int[n];
        for(int j = 0; j < n; j++)
            cin >> maxSpeed[j];
        int count = 1;
        int max = maxSpeed[0];
        for(int j = 1; j < n; j++) {
            if(maxSpeed[j] <= maxSpeed[j - 1] && maxSpeed[j] <= max)
                count++;
            if(maxSpeed[j] < max) max = maxSpeed[j];
        }
        cout << count << endl;
    }
}