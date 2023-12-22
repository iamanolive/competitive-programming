# A. Do not be distracted

* Problem 6 from the c2 ladders
* Rated 800 on CodeForces
* Link to Problem: https://codeforces.com/problemset/problem/1520/A

## Solution Notes

* if arr[i] == arr[i+1], set arr[i] = '0'
* in the remaining string (deleting all '0's) if there's any duplicate letters remaining, that means they weren't next to each other in the input sequence, so it's suspicious.