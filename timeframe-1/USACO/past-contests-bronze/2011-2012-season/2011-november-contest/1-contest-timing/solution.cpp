#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, h, m; cin >> d >> h >> m; 
    long long minsStart = 671;
    long long minsEnd = (d - 11) * 1440 + h * 60 + m;
    cout << max(minsEnd - minsStart, (long long) -1) << endl;
}