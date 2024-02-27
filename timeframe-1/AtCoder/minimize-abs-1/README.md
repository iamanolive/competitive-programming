# B. Minimize Abs 1

* problem B in AtCoder Beginner Contest 330
* solved not as part of contest, but for practice
* rating of 200 on AtCoder
* link to problem: https://atcoder.jp/contests/abc330/tasks/abc330_b

## Problem Notes

* array A contains N elements
* l <= r (integers)
* find X[i] such that (l <= X[i] <= r) and (abs(X[i]-A[i]) <= abs(Y - A[i]))

## Solution Notes

- X[i] changes over the array elements, Y remains the same
- if A[i] <= l, print l
- if A[i] > l and A[i] < r, print A[i]
- if A[i] >= r, print r