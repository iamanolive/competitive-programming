#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int originalArray[3];
    for(int i = 0; i < 3; i++)
        cin >> originalArray[i];
    int sortedArray[3];
    copy(originalArray, originalArray + 3, sortedArray);
    sort(sortedArray, sortedArray + 3);
    for(int i = 0; i < 3; i++)
        cout << sortedArray[i] << '\n';
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << originalArray[i] << '\n';
}