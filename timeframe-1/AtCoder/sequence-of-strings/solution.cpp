#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string *names = new string[n];
    for(int i = 0; i < n; i++)
        cin >> names[i];
    for(int i = n - 1; i >= 0; i--)
        cout << names[i] << '\n';
}