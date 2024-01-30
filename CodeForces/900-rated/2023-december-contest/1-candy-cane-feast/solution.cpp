#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    // array storing height of cows
    long long *cows = new long long [n];
    for(int i = 0; i < n; i++)
        cin >> cows[i];
    // arrays storing height of candy canes
    long long *candyCanes = new long long [n];
    for(int i = 0; i < m; i++)
        cin >> candyCanes[i];
    
    long long top = 0, bottom = 0, cane = 0;
    for(int i = 0; i < m; i++) { // looping through candy canes
        top = candyCanes[i];
        bottom = 0;
        for(int j = 0; j < n; j++) { // looping through cows
            if(cows[j] >= bottom) {
                cows[j] += min(top - bottom, cows[j] - bottom);
                bottom = cows[j];
            }
        }
    } for(int i = 0; i < n; i++)
        cout << cows[i] << endl;
}