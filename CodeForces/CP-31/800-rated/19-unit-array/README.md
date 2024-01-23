# 19. Unit Array

* problem 19 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 879 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1834/A

## Solution Notes

* array A[n] with elements equal to -1 and 1
* array A is good if the sum of all its elements >= 0 and the product of all its elements == 1
* in one operation, select an arbitrary element and change its value to the opposite
* find min number of operations to make the array good
* if array already has an even number of -1 elements and count of -1 <= count of 1, then 0 operations
* else max(1, negCount - posCount)