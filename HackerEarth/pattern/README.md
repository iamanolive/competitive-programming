# Pattern

* HackerEarth 77% success rate
* Link to problem: https://www.hackerearth.com/problem/algorithm/pattern/?purpose=signup&source=problem-page&update=google

# Solution Notes

* n == number of rows, and number of columns
* on first line, print asterisk n times
* initialize an int variable to hold the value of n - 2, which is the value of the position on which we have to output the first asterisk of the slanting line.
* inside a for loop that iterates n - 2 times, declare another for loop that runs n times and print asterisk whenever j == value of previously declared int variable, and print spaces otherwise. 
* decrement the value of the variable on each iteration.
* on the last line, print asterisk n times