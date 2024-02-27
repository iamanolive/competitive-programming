#include <iostream>
using namespace std;

string binarySearch(long long sum) {
    long long start = 1;
    long long end = 1000000000;
    while(start <= end) {
        long long mid = (start - end) / 2 + end;
        if(mid*mid == sum) return "YES";
        if(mid*mid < sum) start = mid + 1;
        if(mid*mid > sum) end = mid - 1;
    } return "NO";
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        long long sum = 0;
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            sum += arr[j];
        } cout << binarySearch(sum) << endl;
    }
}