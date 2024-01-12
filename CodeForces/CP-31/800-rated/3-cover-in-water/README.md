# 3. Cover in Water

* CodeForces Round 911 (Div 2) problem A
* rating of 800, solved as part of the TLE Eliminators CP-31 Sheet
* link to problem: https://codeforces.com/problemset/problem/1900/A

## Solution Notes

* action 1 places water in an empty cell
* action 2 removes water from a cell and places it in any other empty cell
* if cell[i] is empty and cell[i - 1] is filled and cell[i + 1] is filled, then cell[i] becomes filled
* find the min number of times action 1 needs to be performed

<br> <br>

* if the array contains 3 or more unblocked cells in a row, output 2
* otherwise output the total number of unblocked cells