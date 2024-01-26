#include <iostream>
using namespace std;

int main() {

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n; cin >> n;

    int *locations = new int[n];
    for(int i = 0; i < n; i++)
        cin >> locations[i];

    int *cows = new int[n];
    for(int i = 0; i < n; i++)
        cin >> cows[i];
    int *result = new int[n];
    for(int i = 0; i < 3; i++) {
        for(int i = 0; i < n; i++)
            result[i] = cows[locations[i] - 1];
        for(int i = 0; i < n; i++)
            cows[i] = result[i];
    }

    for(int i = 0; i < n; i++)  
        cout << result[i] << endl;
}