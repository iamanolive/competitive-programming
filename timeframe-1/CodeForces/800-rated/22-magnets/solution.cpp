#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int counter = 1;
    string magnets; cin >> magnets;
    char current = magnets[1];
    for(int i = 1; i < n; i++) {
        cin >> magnets;
        if(magnets[0] == current) counter++;
        current = magnets[1];
    } cout << counter << endl;
}