# A. ab

* problem A in AtCoder Beginner Contest 327
* solved not as part of contest, but for practice
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc327/tasks/abc327_a

## Solution Notes

* if i == 0 and A[i] == 'a' or A[i] 'b' and A[i+1] == 'a' or A[i+1] 'b', print YES
* if i == (length - 1) and A[i] == 'a' or A[i] == 'b' and A[i-1] == 'a' or A[i-1] == 'b', print YES
* if A[i] == 'a' and A[i-1] == 'b' or A[i+1] == 'b', print YES
* in all other cases, print NO