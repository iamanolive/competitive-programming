# 16. Desorting

* problem 16 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 887 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1853/A

## Solution Notes

* array A of length N is sorted in increasing order
* in one operation, choose an index i, add 1 to all elements of the array that come before i, subtract 1 from all elements that come after i
<br>

* if minDiff between two elements of the array (such that we take A[i] - A[i - 1]) is less than 0, print 0.
* else print minDiff/2 + 1