#include <iostream>
using namespace std;

int solution(int n) {
    int tmp = n;
    int counter = 0;
    while(true) {
        if(tmp == 1) return counter;
        else if(tmp < 1) return -1;
        if(tmp % 6 == 0) tmp /= 6;
        else tmp *= 2;
        counter++;
    }
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        cout << solution(n) << endl; 
    }
}