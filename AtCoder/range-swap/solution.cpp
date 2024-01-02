#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int *arr = new int[n];
    vector<int> sequence1;
    vector<int> sequence2;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i + 1 >= p && i + 1 <= q)
            sequence1.push_back(arr[i]);
        else if(i + 1 >= r && i + 1 <= s)
            sequence2.push_back(arr[i]);
    } for(int i = 0; i < n; i++) {
        if(i + 1 == p) {
            for(auto element : sequence2)
                cout << element << " ";
                i += q - p;
        }
        else if(i + 1 == r) {
            for(auto element : sequence1)
                cout << element << " ";
                i += q - p;
        } else cout << arr[i] << " ";
    }
}