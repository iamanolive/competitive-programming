# 12. Sequence Game

* problem 12 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 894 (div 3) problem B
* problem link: https://codeforces.com/problemset/problem/1862/B

## Solution Notes

* sequence of positive integers A of length M
* sequence B, a[0] + all remaining a[i] such that a[i - 1] <= a[i]. length of B is N
<br>

* given, A, output B as: print the first element of the array B
* for all elements in B after B[0], if B[i] >= B[i-1], print nothing in between B[i] and B[i-1]
* but if B[i] < B[i-1], then output min(B[i], B[i-1]) between B[i-1] and B[i] in the result array