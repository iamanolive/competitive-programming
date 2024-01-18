# 8. How much does Daytona cost?

* problem 8 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 900 (div 3) problem A
* problem link: https://codeforces.com/problemset/problem/1878/A

## Solution Notes

* an integer is said to be the most common on a subsegment if it occurs more times than any other integer in the subsegment.
* determine if there exists a subsegment where K is the most common in an array A of size N
* the only case in which K is NOT the most common at some subsegment would be if K does not exist in the array, because in a subsegment of size 1 containing only the integer K, K is the most common.