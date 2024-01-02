#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string *arr = new string[n];
    int agreeCount = 0, disagreeCount = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == "For") agreeCount++;
        else if(arr[i] == "Against") disagreeCount++;
    } (agreeCount > disagreeCount) ? cout << "Yes\n" : cout << "No\n";
}