# Suspense String

* CodeChef practice session, rating of 1500
* problems rated 1500 - 1600 (2 star advanced level)
* link to problem: https://www.codechef.com/problems/SUSSTR

## Solution Notes

* binary string S, length N
* empty string T
* alice plays first { picks current S[0], and appends it to either the front or back of string T and deletes S[0] from string S }
* bob { picks current S[S.length() - 1] of string S and appends it to either front or back of string T and deletes S[S.length() - 1] from string S }
* game stops when string S becomes empty

<br> <br>

* alice wants T to be lexicographically smallest
* bob wants T to be lexicographically largest
* find resultant T (both play optimally)

<br> <br>

* (2 moves, last char becomes first and all others shift to the right)
* 10 -> 01 -> 10 
* 0001 -> 1000 -> 0100
* 010111 -> 101011 -> 110101 -> 111010 -> 011101 -> 101110 -> 010111 -> 101011 -> OKAY THIS DOES NOT WORK

<br> <br>

* alice gets to choose order of the first half of the array
* bob gets to choose order of the second half
* if n / 2 is odd, alice gets n / 2 + 1 elements, and bob gets n / 2 elements