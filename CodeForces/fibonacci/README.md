# O. Fibonacci

* Problem O from TLE Eliminators
* Level 1 Sheet #3 Arrays
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

## Notes while Solving

* declare a global vector of size 51 and initialize all its elements to -1
* create a function to calculate the fibonacci values of all numbers from 1 to 50 (since these are the only numbers that can be given as test inputs, according to constraints)
* in this function, set globalVector[1] = 0 and globalVector[2] = 1
* from these two values as the base, calculate the values of the rest of the vector indices by adding the values stored in its previous two indices. (fib[i] = fib[i-1] + fib[i-2])
* function returns modified vector
* call the function in main and copy the returned vector into a temporary vector created in main function
* access the nth (n being the input number entered by user) index of the copied array to output the result.
* index 0 of the global vector is left unused, which is why the size is declared to be 51, so that we get index numbers from 0 to 50.
* to reduce the memory consumption, the calculations in the fib function can be performed in main, thus reducing the need to create a second vector, and also save the time of having to copy in all the values from the globalVector (as denoted in solution2)
* for each test input, we could also only create a vector holding fib(n) values upto that input ONLY (solution2)