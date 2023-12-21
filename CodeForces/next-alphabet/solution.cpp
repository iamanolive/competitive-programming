#include <iostream>
using namespace std;

int main() {
    char alphabet; cin >> alphabet;
    if(alphabet == 'z') cout << 'a' << '\n';
    else cout << char(alphabet + 1) << '\n';
}