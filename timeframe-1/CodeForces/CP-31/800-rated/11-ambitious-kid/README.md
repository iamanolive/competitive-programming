# 11. Ambitious Kid

* problem 11 of the tle cp-31 sheet (the 800-rated page)
* compfest 15 - preliminary online mirror problem A
* problem link: https://codeforces.com/problemset/problem/1866/A

## Solution Notes

* to make the product of an array of numbers equal to 0, the only condition is that at least one of the elements must be 0.
* so she can choose the minimum absolute value element from the array and subtract 1 from it value times (or add 1 to the element if it is negative), to get 0. print value of min absolute element as result.