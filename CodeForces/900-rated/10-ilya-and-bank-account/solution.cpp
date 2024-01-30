#include <iostream>
using namespace std;

int main() {
    string balance; cin >> balance;
    if(balance[0] == '-') {
        int length = balance.length();
        char result = min(balance[length - 1], balance[length - 2]);
        if(length == 2) cout << 0 << endl;
        else if(length == 3) {
            if(result == '0') cout << result << endl;
            else cout << "-" << result << endl;
        } else {
            for(int i = 0; i < length - 2; i++)
                cout << balance[i];
            cout << result << endl;
        }
        
    } else cout << balance << endl;
}