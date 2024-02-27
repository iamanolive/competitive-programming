# 17. Forbidden Integer

* problem 17 of the tle cp-31 sheet (the 800-rated page)
* educational codeforces round 151 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1845/A

## Solution Notes

* input N, K, X
* if N is even and x == 2, print a vector containing N occurrences of 1
* if N is even and x != 2 and k >= 2, print a vector containing N / 2 occurrences of 2
* if N is odd and X != 1, print a vector containing N occurrences of 1
* if N is odd and X == 1 and K >= 3, print 3, subtract 3 from N and then print a vector with (N - 3) / 2 occurrences of 2
* in all other cases, print NO