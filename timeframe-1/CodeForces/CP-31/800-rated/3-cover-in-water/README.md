# 3. Cover in Water

* problem 3 of the tle CP-31 sheet (the 800 rated page)
* codeforces round 911 (div 2) problem A
* link to problem: https://codeforces.com/problemset/problem/1900/A

## Solution Notes

* row of blocked and empty cells
* action 1 places water in empty cells
* action 2 transfers water from a cell into another empty cell
* if cell[i] is empty but cell[i - 1] and cell[i + 1] are filled, cell[i] gets automatically filled with water
* minimum number of times action 1 needs to be performed to fill all the empty cells with water

<br><br>

* loop through the string and push back all the consecutive occurrences of empty cells into the array (such that arr[i] = the number of empty cells between the start of the array and before a blocked cell appears, or empty cells between two blocked cells, or empty cell count between a blocked cell and the end of the string)
* if there exists even a single such A[i] that is greater than or equal to 3, the result will be 2 (fill two empty cells with water, leaving a gap between them, such that the cell in the gap gets filled with water on its own and the water from that cell can be transferred to all the other empty cells, because once transferred the middle cell automatically gets refilled with water an infinite number of times)
* but if there exists no element greater than or equal to 3 in the array, then print the sum of all the elements in the array.