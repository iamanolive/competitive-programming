#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {

        int n; cin >> n;
        int posCount = 0, negCount = 0;

        int *arr = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            if(arr[j] == -1) negCount++;
            else if(arr[j] == 1) posCount++;
        } int counter = 0;
        if(negCount > posCount) {
            counter = (negCount - posCount + 1) / 2;
            posCount += (negCount - posCount + 1) / 2;
            negCount = n - posCount;
        } if(negCount % 2 != 0)
            counter += 1;
        cout << counter << endl;
    }
}