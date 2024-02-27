# 1. Halloumi Boxes

* Problem 1 of the TLE CP-31 sheet (800 rated problems)
* CodeForces Round 912 (Div 2) Problem A
* link to problem: https://codeforces.com/problemset/problem/1903/A

## Solution Notes

* stored in N total boxes, numbers on boxes stored in A[n]
* wants to sort in increasing order based on array number, but can only reverse a subarray of K elements
* is it possible to sort the boxes using any number of reverses?

<br><br>

* the only case in which he cannot successfully sort the array is when the array isn't already sorted and K == 1. print NO.
* if K == 1 and either the array is already sorted in increasing order, OR it is made up of multiple occurrences of a single number, print YES
* in all other cases, the array can easily be sorted. print YES.