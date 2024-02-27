# 8. Find the Array

* problem link: https://codeforces.com/problemset/problem/1550/A
* educational codeforces round 111 (div 2) problem A

## Solution Notes

* {1 -> 1} {8 -> 1 3 4} {7 -> 1 3 3} {42 -> 1 3 5 7 9 11 13}
* the maximum difference between every consecutive element in the sorted array can be no more than 2, and the smallest element has to be 1.
* so, we start from 1 and continue adding 2 to the sum until sum is greater than or equal to x, then we output the number of times an integer has been added to the sum.