# 8. Puzzles

* codeforces round 196 (div 2)
* problem link: https://codeforces.com/problemset/problem/337/A

## Solution Notes

* if n == m, print the difference between the largest and smallest elements
* else iterate over the sorted array to find the min difference between element[i] and element[i+n] such that all the elements present between them are greater than or equal to the one at i and smaller than or equal to the one at i + n