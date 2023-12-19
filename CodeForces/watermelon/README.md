# A. Watermelon

* Scorable problem from TLE Level 1 week 1
* CodeForces rating of 800
* Link to problem: https://codeforces.com/problemset/problem/4/A

## Implementation

* For a number to be divisible into two even numbers, it has to be an even number (no odd number can be divided into two even numbers)
* But, this problem has an edge case, because even though all even numbers are divisible into two numbers, two can only be divided into two and zero. And zero means that one of the friends receives no watermelon, which cannot happen. So the watermelon weight has to be an even number greater than two for us to be able to print out "yes".