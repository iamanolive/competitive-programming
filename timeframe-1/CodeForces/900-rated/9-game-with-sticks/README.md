# 9. Game with Sticks

* codeforces round 258 (div 2)
* problem link: https://codeforces.com/problemset/problem/451/A
* submission 1: wrong answer on test 6 (only applied the odd and even rule. if n*m is even, print malvika and if n*m is odd, print akshat)
* submission 2: wrong answer on test 14 (added in the case for 1. if n == 1 or m == 1, whatever the value is of the other number, akshat will win)
* submission 3: accepted (changed solution to check whether the SMALLEST of the two numbers is even or odd)

## Solution Notes

* akshat goes first, followed by malvika
* player who loses is the first person who cannot remove any more sticks from intersection points at their turn
* n = number of horizontal sticks, m = number of vertical sticks
* n*m = number of intersection points
* if the smaller of the two numbers is odd, akshat wins (since the maximum number of times a stick can be removed == min(n, m) and stick can be removed odd times, which means the last time sticks are removed would happen at akshat's turn. akshat has all the odd turns and malvika has all the even turns) but if the smaller of the two numbers is even, malvika wins