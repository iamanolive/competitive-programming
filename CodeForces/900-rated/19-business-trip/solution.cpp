#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k; cin >> k;
    int *arr = new int[12];
    for(int i = 0; i < 12; i++)
        cin >> arr[i];
    sort(arr, arr + 12);
    if(k == 0) cout << 0 << endl;
    else {
        int counter = 0;
        int itr = 11;
        while(true) {
            if(k <= 0) break;
            if(itr < 0) {
                counter = -1;
                break;
            } k -= arr[itr];
            counter++;
            itr--;
        } cout << counter << endl;
    }
}