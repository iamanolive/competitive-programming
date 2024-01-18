#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        long long n; cin >> n;
        string result = "NO";
        for(int j = 3; j < sqrt(n); j++) {
            if(n % j == 0) {
                result = "YES";
                break;
            }
        } cout << result << endl;
    }
}