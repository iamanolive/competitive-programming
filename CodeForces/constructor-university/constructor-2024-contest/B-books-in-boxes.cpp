#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b, k; cin >> a >> b >> k;
        int num = a + b;
        int rem = 0;
        string result = "NO";
        for(int j = 0; j < a + b; j++) {
            if(num % 10 == k && rem % 10 == k) {
                result = "YES";
                break;
            } num -= 1; rem += 1;
        } cout << result << endl;
    }
}