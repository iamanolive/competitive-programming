# 9. Stone Game

* problem link: https://codeforces.com/problemset/problem/1538/A
* codeforces round 725 (div 3) problem A

## Solution Notes

* find the least distance to either of the two required numbers from the back end or front end { find min(position of N from front, position of N from back, position of 1 from front, position of 1 from back) }
* add the obtained min to sum and delete all numbers from front of array until min (both included) if min = min from front. add min to sum and delete all numbers from back of array until min (both included) if min = min from back.
* if min was smallest element, then find the min(position of largest from front, position of largest from back) and add position to sum. if min was largest element, find min(position of smallest from front, position of smallest from back)

<br>