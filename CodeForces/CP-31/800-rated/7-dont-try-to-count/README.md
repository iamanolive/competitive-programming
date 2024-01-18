# 7. Don't try to count

* problem 7 of the tle CP-31 sheet (the 800-rated page)
* codeforces round 903 (div 3) problem A
* problem link: https://codeforces.com/problemset/problem/1881/A

## Solution Notes

* given string X of length N, and string S of length M
* in one operation, append current value of X to the end of string X
* find the minimum number of such operations after which S will appear in X as a substring
* current solution is just brute-forcing it
* the question asks how many times can we double the string X before it cannot form any newer strings?
* run while loop until no more new strings can be formed.