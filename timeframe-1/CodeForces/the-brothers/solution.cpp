#include <iostream>
using namespace std;

int main() {
    string firstname1, secondname1;
    cin >> firstname1 >> secondname1;
    string firstname2, secondname2;
    cin >> firstname2 >> secondname2;
    if(secondname1 == secondname2)
        cout << "ARE Brothers\n";
    else
        cout << "NOT\n";
}