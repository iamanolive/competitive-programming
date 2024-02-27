# O. Calculator

* Problem O from TLE Eliminators Level 1 (Sheet #1)
* take in the entire mathematical expression in the form of a single string.
* to seperate the first number, the second number and the operator, declare three different variables: two of type string (to hold the numbers) and one of type char (to hold the operator).
* use a while loop and an index variable to insert all the numbers before the operator into the num1 string, and a for loop to insert all the numbers after the operator into the num2 string.
* to convert these strings into ints, use the stoi() function.
* use the switch function to check for the operator type and print the result of the two numbers when the given operation is performed on them.