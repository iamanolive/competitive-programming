# 1. Dice Combinations

* dynamic programming problem 1 from the CSES problemset
* link to problem: https://cses.fi/problemset/task/1633

## Solution Notes

* count the number of ways to construct sum N by throwing a dice 1 or more times when each throw produces an outcome between 1 and 6
* f(n) = f(n - 1) * 2
* f(1) = 0 is the base case

<br><br>
when solved using iterative dynamic programming

<br><br>
when solved using recursive dynamic programming
