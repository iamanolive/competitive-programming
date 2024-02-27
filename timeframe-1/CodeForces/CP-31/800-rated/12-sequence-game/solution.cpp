#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *B = new int[n];
        for(int j = 0; j < n; j++)
            cin >> B[j];
        vector<int> A;
        A.push_back(B[0]);
        for(int j = 1; j < n; j++) {
            if(B[j-1] <= B[j]) A.push_back(B[j]);
            else if(B[j-1] > B[j]) {
                A.push_back(min(B[j-1], B[j]));
                A.push_back(B[j]);
            }
        } cout << A.size() << endl;
        for(auto element : A)
            cout << element << " ";
        cout << endl;
    }
}