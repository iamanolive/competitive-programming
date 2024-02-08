#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int max = 0;
    int *exit = new int[n];
    int *enter = new int[n];
    int current = 0;
    for(int i = 0; i < n; i++) {
        cin >> exit[i] >> enter[i];
        current -= exit[i];
        current += enter[i];
        if(current > max) max = current;
    } cout << max << endl;
}