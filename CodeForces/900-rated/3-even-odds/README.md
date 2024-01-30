# 3. Even Odds

* codeforces round 188 (div 2)
* problem link: https://codeforces.com/problemset/problem/318/A
* submission 1: accepted

## Problem Recap

* start with the first N natural numbers
* first write all odd integers from 1 to N in ascending order, then all even integers from 1 to N
* output the number that stands at the position K
* N can go up to 1e12 and time limit is only 1 second, so we can't store all the N numbers in an array and then output arr[k-1]

## Solution Notes

* come up with a formula for calculation
* if n is even and k > n/2, print (k - n/2) * 2
* else if n is even and k <= n/2, print (k * 2) - 1
* else if n is odd and k > n+1/2, print k - (n+1/2) * 2
* else if n is odd and k >= n+1/2, print (k * 2) - 1

## Logic Deduction

* 7 { 1, 3, 5, 7, 2, 4, 6}
* if n == odd, there's n+1/2 odd numbers and n/2 even numbers
* 8 { 1, 3, 5, 7, 2, 4, 6, 8}
* if n == even, there's n/2 odd numbers and n/2 even numbers