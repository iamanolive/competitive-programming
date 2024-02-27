#include <iostream>
using namespace std;

int main() {
    int totalMonths, totalDays;
    cin >> totalMonths >> totalDays;
    int currentYear, currentMonth, currentDay;
    cin >> currentYear >> currentMonth >> currentDay;
    if(currentMonth == totalMonths && currentDay == totalDays)
        cout << currentYear + 1 << " " << 1 << " " << 1 << '\n';
    else if(currentDay == totalDays)
        cout << currentYear << " " << currentMonth + 1 << " " << 1 << '\n';
    else
        cout << currentYear << " " << currentMonth << " " << currentDay + 1 << '\n';
}