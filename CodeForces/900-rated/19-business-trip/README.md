# 19. Business Trip

* codeforces round 106 (div 2)
* problem link: https://codeforces.com/problemset/problem/149/A
* submission 1: wrong answer on test 6 (forgot to decrement the iterator by 1 after each run of the while loop)
* submission 2: accepted

## Solution Notes

* waters plant in the i-th month, grows by A[i] cm
* should grow at least K cm
* sort the array from order of largest to smallest and count the number of elements to add that are required to get to k