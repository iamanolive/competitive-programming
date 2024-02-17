# 7. Ezzat and two Subsequences

* problem link: https://codeforces.com/problemset/problem/1557/A
* codeforces round 737 (div 2) problem A

## Solution Notes

* avg{3, 1} + avg{2} = 4
* avg{3, 2} + avg{1} = 3.5
* avg{1, 2} + avg{3} = 4.5
* so, by that logic, avg{-7, -6} + avg{-6} = {-12.5}, and avg{-3, 3, 5} + avg{17} = 18.667
* this suggests that the result is the sum of the largest number in the array and the average of all the remaining elements.