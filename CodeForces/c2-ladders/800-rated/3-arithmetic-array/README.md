# 3. Arithmetic Array

* codeforces round 726 (div 2)
* rated 800, problem 1537A
* problem link: https://codeforces.com/problemset/problem/1537/A

## Solution Notes

* array B[k] is good if its mean == 1
* if (sum of all element of B) / k (without rounding) == 1, then array is good
* array A[n], append a non-negative integer to the end of the array. find min number of operations to make the array good
* for any integer x, x / x = 1, so we need the sum of all elements of the array to be equal to the number of elements in the array
* if sum - number >= 0, print sum - total no. of elements (we need to increase the element count)
* if sum - number < 0, print 1 (only one sufficiently large number is enough to make the sum equal to the element count)
