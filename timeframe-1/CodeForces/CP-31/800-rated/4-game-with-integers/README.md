# 4. Game with Integers

* problem 4 of the tle CP-31 sheet (the 800 rated page)
* codeforces round 909 (div 3) problem A
* link to problem: https://codeforces.com/problemset/problem/1899/A

## Solution Notes

* given an integer N
* player can either add 1 to current integer or subtract 1 from current integer on their turn
* vanya gets first turn
* if after vanya's turn the integer is divisible by 3, he wins
* if after 10 moves, vanya has still not won, vova wins

<br><br>

* if N % 3 == 0, vova wins (every time vanya makes a move, vova can conteract it by changing the integer back to the value it had before vanya's turn, thus ensuring that it never becomes divisible by 3 after vanya's turn) (to change a number that is currently divisible by 3 into another number that is divisible by 3, add or subtract 3 from it)
* if N % 3 != 0, vanya wins (he gets first chance, so he can either subtract or add 1 to N to make it divisible by 3)