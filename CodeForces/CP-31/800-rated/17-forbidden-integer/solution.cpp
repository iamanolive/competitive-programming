#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        if(x != 1) {
            cout << "YES" << endl << n << endl;
            for(int j = 0; j < n; j++)
                cout << 1 << " ";
            cout << endl;
        } else if(x == 1 && (n == 1 || k == 1)) {
            cout << "NO" << endl;
        } else {
            string answer = "NO";
            for(int j = 2; j <= min(n, k); j--) {
                if(n % j == 0) {
                    cout << "YES" << endl << n/j << endl;
                    for(int k = 0; k < n/j; k++)
                        cout << j << " ";
                    cout << endl;
                    answer = "YES";
                    break;
                } else if(n % j != 1) {
                    cout << "YES" << endl << n/j + 1 << endl;
                    for(int k = 0; k < n/j; k++)
                        cout << j << " ";
                    cout << n % j << endl;
                    answer = "YES";
                    break;
                }
            } if(answer == "NO") cout << "NO" << endl;
        }
    }
}