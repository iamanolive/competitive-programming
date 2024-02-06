#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int n, k; cin >> n >> k;
    int currentMessageLength = 0;
    int totalMessages = 0;
    for(int i = 0; i < n; i++) {
        string word; cin >> word;
        if(currentMessageLength + word.length() <= k)
            currentMessageLength += word.length() + 1;
        else if(currentMessageLength + word.length() > k) {
            currentMessageLength = word.length() + 1;
            totalMessages += 1;
        }
    } cout << totalMessages + 1 << endl;
}