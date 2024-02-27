# 13. United We Stand

* problem 13 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 892 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1859/A

## Solution Notes

* given array A of length N, add all elements of A to either array B or C such that B and C are both non-empty, and for any B[i], B[i] % C[j] != 0
* output arrays B and C, or -1 if they cannot be obtained
<br>

* case in which B and C cannot be obtained: if all the elements of the array A are identical. print -1 as result
* if the array has multiple occurrences of the max element, add all of them into array C
* add all the rest of the array elements in array B