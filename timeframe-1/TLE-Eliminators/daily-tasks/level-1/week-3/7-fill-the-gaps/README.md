# 7. Fill the Gaps

* AtCoder problem, rated 200 points
* problem link: https://atcoder.jp/contests/abc301/tasks/abc301_b
* Panasonic Programming Contest 2023(AtCoder Beginner Contest 301) problem B

## Solution Notes

* sequence of length N made up of positive integers, such that N[i] != N[i+1] and N[i] != N[i-1]
* if every pair of adjacent terms has absolute difference of 1, terminate
* if abs(A[i] - A[i+1]) != 1, and if A[i] < A[i+1], insert all elements from A[i] + 1 to A[i+1] - 1 between the two elements
* if abs(A[i] - A[i+1]) != 1, and if A[i] > A[i+1], insert all elements from A[i] - 1 to A[i+1] + 1 between the two elements