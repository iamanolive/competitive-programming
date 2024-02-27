# 23. Walking Master

* problem 23 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 858 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1806/A

## Solution Notes

* standing at (x, y), yunqian can move either to point (x+1, y+1) or to point (x-1, y)
* initially stands at point (a, b) and wants to move to point (c, d)
* find min number of moves to make or declare impossible

* at same position = 0

* directly above = 2 * abs(y1 - y2)
* directly below = -1
* directly to right = -1
* directly to left = abs(x1 - x2)

* above and right = if abs(x1 - y1) == abs(x2 - y2) then abs(y1 - y2) + abs(y2 - x2). else -1
* above and left = abs(y1 - y2) + abs(y2 - x2)
* below and right = -1
* below and left = -1