# 18. Grasshopper on a Line

* problem 18 of the tle cp-31 sheet (the 800-rated page)
* educational codeforces round 149 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1837/A

## Solution Notes

* integers X and K
* starting point = 0, on an OX axis
* in one move, can jump some integer distance that is not divisible by k to left or right
* smallest number of moves to reach point x, print moves
* if x % k == 0, 1 jump of length x
* else if x % k == 0, loop from i = x - 1 until i > 0. if i % k != 0 and (x - i) % k != 0, 2 jumps. one of length i and the other of length x - i