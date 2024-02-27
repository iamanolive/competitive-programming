# Permutation

* virtual participation in past tle level 1 contest
* link to problem: https://codeforces.com/group/Is2YXwUuFr/contest/447174/problem/C

## Solution Notes

* A[n] minimize cost to make every element in the array equal tp zero
* each operation, set A[i] = 0
* cost of each operation = A[i] * x + 1, x is the number of operations performed so far
* choose order of elements to perform the operations.
* cout minimum cost, permutation of indices

<br><br>

* print all elements of the array in descending order of their values so that the highest values are multiplied with x when its value is the lowest
* take into account duplicate element values too. index numbers cannot be repeated.
* to achieve this, every time we print out the index of an element from the unsorted original array, we set the value of that element to -1.