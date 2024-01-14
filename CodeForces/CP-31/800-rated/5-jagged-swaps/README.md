# 5. Jagged Swaps

* problem 5 of the tle CP-31 sheet (the 800-rated page)
* codeTON round 7 (div 1 + div 2) problem A
* link to problem: https://codeforces.com/problemset/problem/1896/A

## Solution Notes

* permutation A of size N
* you can select an index i from 2 to (n - 1) such that A[i] > A[i-1] and A[i] > A[i+1], and swap A[i] with A[i+1]
* is it possible to sort the permutation after a finite number of operations

<br><br>

* if permutation is already sorted, print YES
* if 