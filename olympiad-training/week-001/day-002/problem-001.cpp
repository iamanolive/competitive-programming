#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;
    for(int i = 0; i < 10; i++) {
        int num; cin >> num;
        numbers.insert(num % 42);
    } cout << numbers.size() << endl;
}