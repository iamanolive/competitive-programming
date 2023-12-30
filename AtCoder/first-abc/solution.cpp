#include <iostream>
using namespace std;

int main() {
    int length; cin >> length;
    string str; cin >> str;
    bool *arr = new bool[3];
    for(int i = 0; i < 3; i++)
        arr[i] = false;
    for(int i = 0; i < length; i++) {
        if(str[i] == 'A')
            arr[0] = true;
        else if(str[i] == 'B')
            arr[1] = true;
        else if(str[i] == 'C')
            arr[2] = true;
        if(arr[0] == true && arr[1] == true && arr[2] == true) {
            cout << i + 1 << '\n';
            break;
        }
    }
}