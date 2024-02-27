#include <iostream>
#include <cmath>

using namespace std;
#define endl '\n'

int main() {
    int n, k; cin >> n >> k;
    int *participationCount = new int[n];
    int counter = 0;
    for(int i = 0; i < n; i++) {
        cin >> participationCount[i];
        if(5 - participationCount[i] >= k) counter++;
    } cout << counter / 3 << endl;    
}