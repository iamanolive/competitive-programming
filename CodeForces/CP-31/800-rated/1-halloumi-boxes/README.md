# 1. Halloumi Boxes

* CodeForces Round 912 (Div 2) problem A
* rated 800, solved as part of the TLE Eliminators CP-31 Sheet
* link to problem: https://codeforces.com/problemset/problem/1903/A

## Solution Notes

* a total of n boxes, with numbers of them (stored in array boxes[n]) that have to be arranged in increasing order.
* but in one go, only a subarray of k boxes can be sorted.
* given k, determine if it is possible to sort the entire array of boxes in increasing order.

<br><br>

* sorting all the boxes will be possible if k is not equal to 1. if k != 1, print YES.
* if k == 1, print YES only if the array is already sorted, or the largest element in the array == the smallest element in the array (all the elements in the array are equal to each other). if both those conditions are false, print NO.