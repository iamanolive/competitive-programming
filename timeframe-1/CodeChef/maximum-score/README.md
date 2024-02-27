# C. Maximum Score

* problem C in the CodeChef Starters 113 (Division 4)
* rated 1202 on CodeChef

## Solution Notes

* array A of length n (n is always even)
* initialize variable score to 0
* perform operation exactly n/2 times (operation being to add abs(A[i] - A[i+1]) to score, and delete those two elements from the array)
* find the max obtainable score

* if count(1) == count(0), print count(1)
* if count(1) < count(0), print count(1)
* if count(1) > count(0) print count(0)