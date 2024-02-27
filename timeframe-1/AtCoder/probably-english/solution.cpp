#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string *arr = new string[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    string result = "No";
    for(int i = 0; i < n; i++) {
        if(arr[i] == "and" || arr[i] == "not" || arr[i] == "that" || arr[i] == "the" || arr[i] == "you") {
            result = "Yes";
            break;
        }
    } cout << result << '\n';
}