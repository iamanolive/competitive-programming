# 1. Polycarp and Coins

* codeforces round 734 (div 3)
* rated 800, problem 1551A
* problem link: https://codeforces.com/problemset/problem/1551/A

## Solution Notes

* pay exactly N burles
* 1 burle and 2 burle coins
* minimize difference between the count of 1 burle and 2 burle coins, total value should remain N (c1 + 2 * c2 = N)
* if N % 3 == 2, c1 = N / 3 and c2 = N / 3 + 2
* if N % 3 == 1, c1 = N / 3 + 1 and c2 = N / 3
* if N % 3 == 0, c1 = N / 3 and c2 = N / 3