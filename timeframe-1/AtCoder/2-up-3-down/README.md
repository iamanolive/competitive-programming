# A. 2 Up 3 Down

* problem A in AtCoder Beginner Contest 326
* solved not as part of contest, but for practice
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc326/tasks/abc326_a

## Solution Notes

* floors in building = 100
* uses the stairs for moving UP 2 floors or less
* uses the stairs for moving DOWN 3 floors or less
* uses the elevator otherwise
* what does he use to move from X to Y

- if (x - y < 0 && abs(x - y) <= 2) print STAIRS
- if (x - y >= 0 && abs(x - y) <= 3) print STAIRS
- in all other cases, print ELEVATOR