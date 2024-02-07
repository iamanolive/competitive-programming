#include <iostream>
using namespace std;

int main() {
    string username; cin >> username;
    sort(username.begin(), username.end());
    for(int i = 1; i < username.length(); i++) {
        if(username[i] == username[i - 1]) {
            username.erase(i, 1);
            i -= 2;
        }
    } if(username.length() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}