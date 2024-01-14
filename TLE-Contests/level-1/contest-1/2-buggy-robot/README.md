# B. Buggy Robot

* virtual participation in past tle level 1 contest
* link to problem: https://codeforces.com/group/Is2YXwUuFr/contest/423170/problem/B

## Solution Notes

* (n + 1) x (n + 1) size grid, rows 0 to n, columns 0 to n
* robot 1 at (x1, y1), robot 2 at (x2, y2)
* each robot can move one block in any of the 8 adjacent directions in 1 step
* finishing point is one of the four corners of the grid, i.e. {0, 0} {n, n} {0, n} {n, 0}
* find combined minimal steps for both robots to get to the finishing point without colliding