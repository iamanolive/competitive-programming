#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string tasks; cin >> tasks;
        for(int j = 0; j < (n - 1); j++)
            if(tasks[j] == tasks[j + 1])
                tasks[j] = '0';
        string result = "";
        for(int j = 0; j < n; j++)
            if(tasks[j] != '0')
                result += tasks[j];
        sort(result.begin(), result.end());
        string finalAnswer = "YES";
        for(int j = 0; j < result.length() - 1; j++) {
            if(result[j] == result[j + 1]) {
                finalAnswer = "NO";
                break;
            }
        } cout << finalAnswer << '\n';
    }
}