#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    int var = n - 2;
    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < n; j++) {
            if(j == var) cout << "*";
            else cout << " ";
        }
        var--;
        cout << endl;
    }
}