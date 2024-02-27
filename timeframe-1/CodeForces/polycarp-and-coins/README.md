# A. Polycarp and Coins

* Problem 1 from the c2 ladders
* Rating of 800 on CodeForces
* Link to problem: https://codeforces.com/problemset/problem/1551/A

## Solution Notes

* pay exactly n burles
* has coins of 1 burle and 2 burles
* minimize difference between count of 1 burle and 2 burle coins
* c1 -> number of 1 burle coins
* c2 -> number of 2 burle coins
* value of coins should be exactly n
* c1 + (2 * c2) == n

- if n % 3 == 0, c1 = n/3 and c2 = n/3
- if n % 3 == 1, c1 = n/3 + 1 and c2 = n/3
- if n % 3 == 2, c1 = n/3 and c2 = n/3 + 1