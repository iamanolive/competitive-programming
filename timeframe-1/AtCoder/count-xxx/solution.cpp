#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string alphabet; cin >> alphabet;
    
    int *arr = new int[26];
    for(int i = 0; i < 26; i++)
        arr[i] = 0;
        
    if(n == 1) {
        cout << 1 << '\n';
        return 0;
    }
    
    int counter = 1;
    char current = alphabet[0];
    
    for(int i = 1; i < n; i++) {
        if(alphabet[i] == current)
            counter++;
        else {
            if (arr[int(current) - 'a'] < counter)
                arr[int(current) - 'a'] = counter;
            counter = 1;
            current = alphabet[i];
        } if(i == (n - 1)) {
            if (arr[int(current) - 'a'] < counter)
                arr[int(current) - 'a'] = counter;
        }
    } int sum = 0;
    for(int i = 0; i < 26; i++)
        sum += arr[i];
    cout << sum << '\n';
}