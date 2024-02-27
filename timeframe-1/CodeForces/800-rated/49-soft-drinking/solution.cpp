#include <iostream>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int friendCount, bottleCount, mlPerBottle, limeCount, slicePerLime, saltCount;
    cin >> friendCount >> bottleCount >> mlPerBottle >> limeCount >> slicePerLime >> saltCount;
    int drinkToast, saltToast;
    cin >> drinkToast >> saltToast;
    int totalDrink = bottleCount * mlPerBottle;
    int totalLime = limeCount * slicePerLime;
    int totalSalt = saltCount;
    cout << min(totalDrink / drinkToast, min(totalLime, totalSalt / saltToast)) / friendCount << endl;
}