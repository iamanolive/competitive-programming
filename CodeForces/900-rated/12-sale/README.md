# 12. Sale

* codeforces beta round 34 (div 2)
* problem link: https://codeforces.com/problemset/problem/34/B
* submission 1: accepted

## Solution Noyes
* total N tv sets
* array A containing the prices of all N tv sets (can be positive or negative)
* can carry at most M tv sets at a time
* find maximum sum of money that he can earn

* sort the array A in increasing order and add (-1 * A[i]) to whatever comes first: the last negative element, or i = M - 1