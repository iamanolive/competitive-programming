#include <iostream>
using namespace std;

// solution 1 (passed 50% test cases)
int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *maxCapacity = new int[n];
        for(int j = 0; j < n; j++)
            cin >> maxCapacity[j];
        int end = n;
        int totalTokens = 0;
        int minVal = maxCapacity[n - 1];
        int minPos = n - 1;
        for(int j = n - 1; j >= 0; j--) {
            if(maxCapacity[j] < minVal) {
                minVal = maxCapacity[j]; // 2
                minPos = j; // 0
            } if(j == 0 || minVal == 1) {
                totalTokens += (end - minPos) * minVal;
                minVal = maxCapacity[minPos - 1];
                minPos -= 1;
                end = minPos + 1;
                j = end;
            }
        } cout << totalTokens << endl;
    }
}


// solution 2 (passed 100% test cases)
int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *maxCapacity = new int[n];
        int *tokenCount = new int[n];
        for(int j = 0; j < n; j++)
            cin >> maxCapacity[j];
        long long totalTokens = maxCapacity[0];
        tokenCount[0] = maxCapacity[0];
        for(int j = 1; j < n; j++) {
            tokenCount[j] = min(maxCapacity[j], tokenCount[j - 1]);
            totalTokens += tokenCount[j];
        } cout << totalTokens << endl;
    }
}