# 22. Coins

* problem 22 of the tle cp-31 sheet (the 800-rated page)
* educational codeforces round 146 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1814/A

## Solution Notes

* two types of coins: 2 burles and K burles
* find whether it's possible to represent N burles in coins (if there's integers X and Y such that 2 * X + K * Y == N)

* if (n % 2 == 0) or (n % k == 0) or ((n % k) % 2 == 0), print YES
* if n is odd and k is odd, print YES
* else print NO (because in this case K will be even and we already know that 2 is even, and even + even can never make odd, so it is impossible to get n from them)