#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int *arrOriginal = new int[8];
    int *arrDuplicate = new int[8];
    for(int i = 0; i < 8; i++) {
        cin >> arrOriginal[i];
        arrDuplicate[i] = arrOriginal[i];
    } sort(arrDuplicate, arrDuplicate + 8);
    string result = "Yes";
    if(arrDuplicate[0] < 100 || arrDuplicate[7] > 675) result = "No";
    for(int i = 0; i < 8; i++) {
        if(result == "No") break;
        if(arrDuplicate[i] != arrOriginal[i] || arrDuplicate[i] % 25 != 0)
            result = "No";
    } cout << result << '\n';
}