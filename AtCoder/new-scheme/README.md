# A. New Scheme

* problem A in AtCoder Beginner Contest 308
* solved not as part of contest, but for practice
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc308/tasks/abc308_a

## Solution Notes

print TRUE if: <br>
* the array is sorted
* array[0] is greater than or equal to 100
* array[size-1] is smaller than or equal to 675
* for all i, array[i] % 25 == 0
<br>
otherwise, print FALSE