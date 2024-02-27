#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    while(true) {
        long long num; cin >> num;
        if(num == 42) break;
        else cout << num << endl;
    }
}