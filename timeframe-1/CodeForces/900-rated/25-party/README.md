# 25. Party

* codeforces beta round 87 (div 1)
* problem link: https://codeforces.com/problemset/problem/115/A
* submission 1: 

## Solution Notes

* N employees with either zero or one immediate manager
* if A is the immediate manager of B, A is superior of B
* if B has an immediate manager C such that A is the superior of C, A is superior of B
* create a map and set its keys to all numbers from 1 to N and its values to vectors of superiors?

* the numbers from 1 to N that are not present in the 'superior' array are all employees who are not the superiors of any other employee. they can all occupy a single group
* all the index elements that are equal to -1 denote employee number index+1 has no superior. they can all occupy ANY group that does not contain one of their inferiors in them.
* only remaining group is the numbers from 1 to N that are present in the 'superior' array. they are all the superiors of someone, and might also be superiors of each other. 
* these are the values that we make a map of. the remaining numbers are all added in as keys and a vector of all THEIR superiors is the value.
* 