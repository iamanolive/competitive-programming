# Print the Pattern

* HackerEarth submission
* 52% success rate
* Link to problem: https://www.hackerearth.com/problem/golf/print-the-pattern/

# Solution Notes

* using 0-based indexing, if the current row % 2 == 0, then print all the numbers on it in descending order.
* if the current row % 2 != 0, print all the numbers on it in ascending order.

* can be done by declaring two nested for loops, one that keeps track of the current row and the other that keeps track of the number of elements that need to be printed on the current row.
* also declare a variable outside the for loops that stores the number that needs to be printed on each iteration of the nested for loop.
