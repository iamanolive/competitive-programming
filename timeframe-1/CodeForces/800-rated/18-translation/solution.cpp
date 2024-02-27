#include <iostream>
using namespace std;

int main() {
    string ber, bir; cin >> ber >> bir;
    string reverse = "";
    for(int i = ber.length() - 1; i > -1; i++)
        reverse += ber[i];
    if(reverse == bir) cout << "YES" << endl;
    else cout << "NO" << endl;
}