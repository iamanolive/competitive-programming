#include <iostream>
#include <set>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        multiset<int> numbers;
        for(int i = 0; i < (2 * n); i++) {
            int val; cin >> val;
            numbers.insert(val);
        } int evenCount = 0, oddCount = 0;
        for(auto element : numbers) {
            if(element % 2 == 0) evenCount++;
            else oddCount++;
        } if(evenCount == oddCount) cout << "Yes\n";
        else cout << "No\n";
    }
}