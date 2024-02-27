#include <iostream>
#include <vector>

using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> result;
        int counter = 1;
        while(true) {
            if(n == 0) break;
            else if(n % 10 != 0) result.push_back((n % 10) * counter);
            n /= 10;
            counter *= 10;
        } cout << result.size() << endl;
        for(int j = result.size() - 1; j > -1; j--)
            cout << result[j] << " ";
        cout << endl;
    }
}