#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

int findSize(int n) {
    string x = to_string(n);
    int len = x.length();
    return len;
}

int toAddOrNotToAdd(int n) {
    string x = to_string(n);
    int i = 1;
    while(true) {
        if(i >= findSize(n)) break;
        if(x[i] < x[0]) return 0;
        else if(x[i] > x[0]) return 1;
        i++;
    } return 0;
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int power = findSize(n) - 1;
        int nine = 9 * (findSize(n) - 1);
        long long result;
        if(n < 10) result = n;
        else result = nine + (n/pow(10,power)) - 1 + toAddOrNotToAdd(n);
        cout << result << endl;
    }
}