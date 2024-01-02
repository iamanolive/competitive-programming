#include <iostream>
using namespace std;

int main() {
    int k; cin >> k;
    int letter = 65;
    for(int i = 0; i < k; i++)
        cout << char(letter + i);
    cout << endl;
}