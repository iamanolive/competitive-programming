#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    long long total = 0;
    total += min(eyes, min(mouths, bodies));
    eyes -= total;
    mouths -= total;
    bodies -= total;
    total += min(eyes/2, bodies);
    cout << total << '\n';
}