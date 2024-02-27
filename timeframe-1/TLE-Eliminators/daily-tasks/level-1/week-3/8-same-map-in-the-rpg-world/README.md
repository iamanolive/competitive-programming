# 8. Same map in the RPG world

* AtCoder problem, rated 200 points
* problem link: https://atcoder.jp/contests/abc300/tasks/abc300_b
* UNIQUE VISION Programming Contest 2023 Spring (AtCoder Beginner Contest 300) problem B

## Solution Notes

* two grids A and B with H rows and W columns
* each cell has either '#' or '.'
* vertical shift -> replace A[1][j], A[2][j] ... A[H-1][j], A[H][j] with A[2][j], A[3][j] ... A[H][j], A[1][j]
* horizontal shift -> replace A[i][1], A[i][2] ... A[i][W-1], A[i][W] with A[i][2], A[i][3] ... A[i][W], A[i][1]
* only print YES if the '#' character count in A == '#' character count in B, and '#' character count in all the rows in A == '#' character count in all the rows in B, and '#' character count in all the columns in A == '#' character count in all the columns in B.
* if any one of these conditions is not satisfied, print NO