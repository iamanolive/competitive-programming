# E. Interval Sweep

* Problem E from Assuit University Training Contest 1
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

## Solution Notes

* given two ints a, b
* if some interval l to r has 'a' odd-numbers and 'b' even numbers, print YES
* otherwise print NO
* a, b are both between 0 and 100 (inclusive)
* absolute difference between even and odd count has to be 1
* l to r, l < r 
* (l CANNOT BE equal to r because we're supposed to have a non-empty interval)

* (a == 0 and b == 0) is not possible for any non-empty interval (because all integers are always either even or odd)
* (a == b) can be true (1, 2, 3, 4 : 2 even and 2 odd) (but only if they aren't 0) (because it's a non-empty interval)
* abs(even - odd) == 1, then true
* in all other cases, false