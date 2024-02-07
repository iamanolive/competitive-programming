# 11. Stones on the Table

* codeforces round 163 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/266/A
* N stones in a row, each of which can be red, green or blue. find min number of stones to remove so that two neighboring stones have different colors.
* submission 1: runtime error on test 9, declared a for loop from 1 until i < count instead of i < stones.length()
* submission 2: accepted