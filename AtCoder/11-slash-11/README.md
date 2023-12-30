# B. 11/11

* problem B from AtCoder Beginner Contest 328
* rated 200 on AtCoder
* solved as part of the 5-hr-long solve-as-many-200-rated-problems-as-you-can challenge
* link to problem: https://atcoder.jp/contests/abc328/tasks/abc328_b

## Solution Notes

* total months = N
* month[i] has arr[i] days
* if all the digits in arr[i] are the same and also equal to all the digits in month[i], print REPDIGITS
* otherwise, print NOT REPDIGITS

<br>

- i has multiple occurences of only a SINGLE digit
- j has multiple occurences of the SAME single digit (and no other digit besides)