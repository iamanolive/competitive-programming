#include <iostream>
using namespace std;

int main() {
    string sum; cin >> sum;
    string numbers = "";
    for(int i = 0; i < sum.length(); i++)
        if(sum[i] != '+') numbers += sum[i];
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < numbers.length() - 1; i++)
        cout << numbers[i] << "+";
    cout << numbers[numbers.length() - 1] << endl;
}