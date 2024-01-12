# 2. Line Trip

* Educational CodeForces Round 158 (Div 2) problem A
* rating of 800, solved as part of the TLE Eliminators CP-31 Sheet
* link to problem: https://codeforces.com/problemset/problem/1901/A

## Solution Notes

* travel in a straight line from 0 to x and back to 0
* travelling by car = 1 liter gasoline per 1 unit of distance travelled (tank is completely full at start)
* n gas stations, located at points in array gas[n]. whenever you arrive at a point gas[i], car is fully refuelled. no gas stations at x and 0
* minimum volume of gas tank that will allow you to travel the specified distance

<br><br>

* question here will be what is the max distance i have to travel between petrol stations.
* append 0 to the beginning of the array (tank is full at start) and find the difference between all the elements of the array. store the max difference
* also find the difference between n and the last gas station in the array, and multiply it by 2
* output max of both these values
* (question statement mentions that the array is already sorted, so we don't have to sort)