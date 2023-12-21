# Pattern Printing

* GeeksForGeeks submission
* 54.24 % average accuracy
* Link to problem: https://www.geeksforgeeks.org/problems/pattern-printing1347/1

## Notes while Solving

* nested for loops
* first for loop iterates from 0 to n-1 (both inclusive), a total of n times (denoting the total space-seperated sections of asterisks that need to be printed)
* second for loop iterates from 0 to current value of i (both inclusive) and prints an asterisk on each iteration (denoting the total number of asterisks that need to be printed in each section)
* space is printed each time the nested for loop ends