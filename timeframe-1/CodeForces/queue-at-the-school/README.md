# B. Queue at the School

* Problem B from CodeForces Round 163 (Div 2)
* Rating of 800 on CodeForces
* Link to problem: https://codeforces.com/problemset/problem/266/B

## Notes while Solving

* create a for loop that runs t times
* inside the first for loop, create a second nested for loop, that loops over all the elements of the string.
* during each iteration, if at position string[i] there is a BOY and at position string[i+1] there is a GIRL, they swap places, so that string[i] = GIRL and string[i+1] = BOY, and j gets incremented two places, because string[i+1] cannot swap places again in the current second, and the closest next element that CAN swap places is two places to the right of string[i] => one person CANNOT swap places more than once in the same second.
* during each iteration of the outer for loop, if the above condition is true, then the students swap places, and this happens t times.
* the string is printed to show how the queue will look at the end of t seconds


* time complexity = O(n*t)
* space complexity = O(n+2) = O(n)