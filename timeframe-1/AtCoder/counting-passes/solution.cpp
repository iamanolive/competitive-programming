#include <iostream>
using namespace std;

int main() {
    int n, l; cin >> n >> l;
    int counter = 0;
    int *marks = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
        if(marks[i] >= l) counter++;
    } cout << counter << '\n';
}