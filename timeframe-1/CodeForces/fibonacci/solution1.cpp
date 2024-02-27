#include <iostream>
#include <vector>
using namespace std;

vector<long long> fibArray(51, -1);

vector<long long> fib() {
    fibArray[1] = 0;
    fibArray[2] = 1;
    for(int i = 3; i < 51; i++)
        fibArray[i] = fibArray[i-1] + fibArray[i-2];
    return fibArray;
}

int main() {
    int n; cin >> n;
    vector<long long>fibonacci = fib();
    cout << fibonacci[n] << '\n';
}