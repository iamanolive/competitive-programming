#include <iostream>
using namespace std;

int main() {
    int *nums = new int[1000];
    int x = 1;
    for(int i = 0; i < 1000; i++) {
        while(true) {
            if(x % 10 != 3 && x % 3 != 0) break;
            x++;
        } nums[i] = x;
        x++;
    }
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int k; cin >> k;
        cout << nums[k - 1] << endl;
    }
}