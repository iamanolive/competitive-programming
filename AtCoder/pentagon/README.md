# B. Glass and Mug

* problem B in AtCoder Beginner Contest 333
* solved not as part of contest, but for practice
* rating of 200 on AtCoder (Toyota Programming Contest 8)
* link to problem: https://atcoder.jp/contests/abc333/tasks/abc333_b

## Solution Notes

* if the line {s1, s2} and line {t1, t2} are both SIDES of the pentagon, or they're both DIAGONALS of the pentagon, then print YES
* otherwise print NO
<br>

if we're checking for both lines being sides:
* A -> B
* B -> C
* C -> D
* D -> E
* E -> A
<br> we could also technically convert them to integers, and if the difference between two points of the same line % 5 have difference of one (but this should be true for both lines), then they SATISFY the condition.

<br>
<br>

if we're checking for both lines being diagonals:
* A -> C, A -> D
* B -> D, B -> E
* C -> A, C -> E
* D -> B, D -> A
* E -> B, E -> C
<br> if abs(difference) between both the points (their values taken modulo 5) have a difference of 2 or 3, they SATISFY the condition.
<br><br>
4 - 0 == 4, which is still a single side of the pentagon, and no other numbers result to 4, so if difference between the two points is 4, that also makes it a side.