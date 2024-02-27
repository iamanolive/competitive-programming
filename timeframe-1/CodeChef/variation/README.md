# Variation

* past year ZCO resources page on CodeChef
* question appeared in ZCO 2015
* link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO15002

## Solution Notes

* using the O(n squared) time complexity method of checking each element with every other element for their difference only passes 1 of the 2 constraints, and exceeds the time limit on all other cases.
* if arr[j] - arr[i] (where j is strictly greater than i) is greater than or equal to k, then all elements after j also have a difference of k or more with arr[i]. we don't have to loop through them all and can instead directly increment i by 1.