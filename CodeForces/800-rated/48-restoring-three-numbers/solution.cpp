#include <iostream>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int *arr = new int[4];
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    int abc = arr[3];
    int a = (arr[0] + arr[1]) - arr[3];
    int b = arr[0] - a;
    int c = arr[1] - a;
    cout << a << " " << b << " " << c << endl;
}