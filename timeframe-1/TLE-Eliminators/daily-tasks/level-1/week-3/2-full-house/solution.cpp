#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int *arr = new int[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    sort(arr, arr + 5);
    int e1 = arr[0], e2 = arr[4];
    int e1count = 0, e2count = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == e1) e1count++;
        else if(arr[i] == e2) e2count++;
    } if(e1count + e2count == 5 && ((e1count == 2 && e2count == 3) || (e1count == 3 && e2count == 2)))
        cout << "Yes" << endl;
    else cout << "No" << endl;
}