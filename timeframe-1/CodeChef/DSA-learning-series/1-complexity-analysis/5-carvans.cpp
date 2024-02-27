#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *maxSpeed = new int[n];
        int *actualSpeed = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> maxSpeed[j];
            actualSpeed[j] = maxSpeed[j];
        } for(int j = 1; j < n; j++)
            if(actualSpeed[j - 1] < actualSpeed[j])
                actualSpeed[j] = actualSpeed[j - 1];
        int counter = 0;
        for(int j = 0; j < n; j++)
            if(actualSpeed[j] == maxSpeed[j])
                counter++;
        cout << counter << endl;
    }
}