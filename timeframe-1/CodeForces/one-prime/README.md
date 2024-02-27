# H. One Prime

* Problem H from TLE Eliminators
* Level 1 Sheet #2 Loops
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

## Notes while Solving

* set a bool value isPrime to true.
* loop from 2 to input number minus 1, and if on any iteration, number % i == 0, then set isPrime to false.
* if(isPrime == false) print NO
* else print YES
* (if there is any number other than 1 and the number itself that the input is divisible by, then it is NOT a prime number)
* constraints state that all test input will be greater than 1, so we don't have to worry about writing a condition for input = 1