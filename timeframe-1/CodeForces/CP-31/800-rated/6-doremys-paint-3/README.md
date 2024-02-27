# 6. Doremy's Paint 3

* problem 6 from the tle CP-31 sheet (the 800-rated page)
* codeforces round 906 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1890/A

## Solution Notes

* if the sums of two adjacent elements of the array are equal to the same value for the entire length of the array, the array is good.
* if the array has only 2 elements, print YES
* required array can be constructed only if 1) either there are merely two distinct values in the input array, such that either A == B or abs(A - B) == 1 2) or the array is composed of multiple occurrences of a single element