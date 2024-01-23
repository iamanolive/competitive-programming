#include <iostream>
using namespace std;

int main() {
    int year; cin >> year;
    while(true) {
        year++;
        int *arr = new int[4];
        arr[0] = year % 10;
        arr[1] = (year / 10) % 10;
        arr[2] = (year / 100) % 10;
        arr[3] = (year / 1000) % 10;
        if(arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3])
            if(arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[3])
                break;
    } cout << year << endl;
}