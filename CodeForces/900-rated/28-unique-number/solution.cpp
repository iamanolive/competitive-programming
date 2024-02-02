#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int x; cin >> x;
        string result = "";
        if(x > 45) cout << -1 << endl;
        else if(x < 10) cout << x << endl;
        else {
            int num = 9;
            while(true) {
                if(x - num >= 0) {
                    result = to_string(num) + result;
                    x -= num;
                }
                num--;
                if(x == 0 || num == 0) break;
            } cout << result << endl;
        }
    }
}


