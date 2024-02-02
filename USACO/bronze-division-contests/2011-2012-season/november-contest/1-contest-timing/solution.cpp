#include <iostream>
using namespace std;

int main() {
    long long startTime = (11 * 60 + 11);
    long long day, hour, mins; cin >> day >> hour >> mins;
    long long finishTime = ((day - 11) * 24 * 60 + hour * 60 + mins);
    cout << max((long long) -1, finishTime - startTime) << endl;
}