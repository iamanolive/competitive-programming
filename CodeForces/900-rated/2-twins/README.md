# 2. Twins

* codeforces round 111 (div 2)
* problem link: https://codeforces.com/problemset/problem/160/A

## Solution Notes

* array A of size N that stores the denominations of each of the N coins
* find the minimum number of array elements you need to add such that 1) they all have the highest possible values (no such array element is left remaining that has a value greater than one of the elements added into sum) and 2) the sum of added elements is greater than the sum of remaining elements
* submission 1: wrong answer on test 3, i'm dumb and wrote cin >> arr[n] instead of cin >> arr[i] as content of the for loop. therefore got an out of bounds error.
* submission 2: wrong answer on test 5, did some complicated something
* submission 3: accepted, apparently i'd forgotten to take sum of all remaining elements and just stores first and last elements in two variables and compared them instead.