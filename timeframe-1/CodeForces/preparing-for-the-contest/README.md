# B. Preparing for the Contest

* problem B in CodeForces round 916 Div 2
* solved as part of rated contest
* link to problem: https://codeforces.com/contest/1914/problem/B

## Notes while Solving

* plans to solve a total of n problems
* if he solves a problem which is harder than the last problem he solved, he gets excited
* doesn't get excited when he solved first problem in the order
* wants to get excited exactly k times
* print elements from 1 to (n - k) in reverse order (difficulty of each element is smaller than that of the element that occurs before it, so he NEVER gets excited)
* then print the remaining elements from (n - k + 1) to n, in increasing order. this prints out exactly k elements and each element is strictly GREATER than every element that came before it, so he gets excited exactly k times. (n - k + 1 to n, both inclusive, is exactly k elements)