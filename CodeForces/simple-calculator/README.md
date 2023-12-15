# C. Simple Calculator

* Problem C from TLE Eliminators Level 1 (Sheet #1)
* we take in two numbers, and print out their sum, product and difference in seperate lines
* we need to use the datatype long long for both the integers because the max value of x and y is 10^5. the max product when x and y are multipled will be 10^5, which will overflow if stored in an int (which has max capacity of 10^9)