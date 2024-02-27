#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        int queries; cin >> queries;
        int *q1 = new int[queries];
        int *q2 = new int[queries];
        for(int j = 0; j < queries; j++) {
            cin >> q1[j] >> q2[j];
            if(q1[j] == q2[j]) cout << -1 << " " << -1 << endl;
            else if(abs(q1[j] - q2[j]) == 0) {
                if(arr[q1[j] - 1] == arr[q2[j] - 1]) cout << -1 << " " << endl;
                else cout << arr[q1[j] - 1] << " " << arr[q2[j] - 1] << endl;
            } else cout << "computing" << endl;
        }
    }
}