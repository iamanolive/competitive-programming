# 2. Line Trip

* problem 2 of the tle CP-31 sheet (the 800-rated page)
* Educational CodeForces Round 158 (div 2) problem A
* link to problem: https://codeforces.com/problemset/problem/1901/A

## Solution Notes

* travel from point 0 to x and back to 0
* at point 0, car is fully fuelled
* N gas stations located at points in Array[n]. car can only be refuelled at the gas stations.
* minimum possible volume of the gas tank to travel from 0 to x
* find the max possible distance between two gas stations

<br><br>

* append 0 to the beginning of the array and then calculate the difference between current element and the previous element, starting from arr[1] to arr[n - 1]. store the maximum difference calculate
* then calculate the distance between the last gas station in the array and x, and multiply the resulting value by 2.
* find the maximum of these two values and print it.