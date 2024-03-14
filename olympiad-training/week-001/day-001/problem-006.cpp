#include <iostream>
using namespace std;

long long Z(int n) {
    long long result = 0;
    int pow5 = 1;
    while(true) {
        if(pow5 >= n) break;
        pow5 *= 5;
        result += n / pow5;
    } return result;
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        cout << Z(n) << endl;
    }
}