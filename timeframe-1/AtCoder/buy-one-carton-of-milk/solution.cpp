#include <iostream>
using namespace std;

int main() {
    double n, s, m, l; cin >> n >> s >> m >> l;
    double sixpack = s / 6;
    double eightpack = m / 8;
    double twelvepack = l / 8;
    if(sixpack < eightpack && sixpack < twelvepack) {
        n /= 6;
        
    }
}