# 4. Game with Integers

* CodeForces Round 909 (Div 3) problem A
* rating of 800, solved as part of the TLE Eliminators CP-31 Sheet
* link to problem: https://codeforces.com/problemset/problem/1899/A

## Solution Notes

* given integer N, each player can add 1 or subtract 1 from current integer on their turn
* vanya goes first
* if after vanya's move the integer % 3 == 0, vanya wins (print FIRST)
* if 10 moves have passed and vanya has not won, then vova wins (print SECOND)

<br><br>

* if n % 3 == 0, SECOND
* in all other cases, FIRST 
* if the current number is not divisible by 3, vanya can subtract 1 or add 1 to it (since he has first chance) and make it divisible by 3 before vova even gets his chance
* but he cannot ever arrive at a multiple of 3 if the current num is a multiple. vova will keep manipulating the num on his chance so that it is never divisible by 3