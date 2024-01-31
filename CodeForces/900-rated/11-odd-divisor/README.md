# 11. Odd Divisor

* codeforces round 697 (div 3)
* problem link: https://codeforces.com/problemset/problem/1475/A
* submission 1: accepted

## Solution Notes

* n = 10 YES
* n = 11 NO
* n = 20 YES
* n = 21 YES
* n = 22 YES
* n = 23 NO

* if the given number is odd, then YES (since the only condition is that the divisor must be greater than 1. there is no maximum value given)
* if the number is even AND a power of 2, then print NO
* if the number is even and NOT a power of 2, print YES
* to check whether a number is a power of 2, if n & n - 1 == 0, then it IS. else it is NOT.

* 2 NO
* 4 NO
* 6 YES
* 8 NO
* 10 YES
* 12 YES
* 14 YES
* 16 NO
* 18 YES
* 20 YES
* 22 YES