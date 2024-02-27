#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int a, b; cin >> a >> b;
    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << endl;
}