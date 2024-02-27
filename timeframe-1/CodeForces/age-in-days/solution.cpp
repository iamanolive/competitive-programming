#include <iostream>
using namespace std;

int main() {
    int age; cin >> age;
    cout << age/365 << " years\n";
    age %= 365;
    cout << age/30 << " months\n";
    age %= 30;
    cout << age << " days\n";
}