# A. Constructive Problems

* problem A in CodeForces round 915 Div 2
* solved as part of rated contest
* link to problem: https://codeforces.com/contest/1905/problem/A

## Problem Notes

* gridlandia = (n * m) matrix
* government can choose to rebuild certain cities
* city (i, j) can become rebuilt if either (i+1, j) or (i-1, j) is rebuilt. and either (i, j+1) or (i, j-1) is rebuilt.
* if city (i, j) is located on border and has one horizontally or vertically neighboring city, only that city is considered (as in, it should still have atleast one horizontal and one vertical neighboring rebuilt city for aid)
* find min cities government has to rebuilt so that eventually all cities will be rebuilt

## Implementation of Code

* at least one city in each row and one city in each column has to be rebuilt if we want all the cities in the grid rebuilt, because each city needs aid from one horizontal and one vertical neighbour that is already rebuilt.
* if the government doesn't build any cities in a particular row or column, that entire row/column will have NO REBUILT CITIES.
* so, we take the max of the number of rows and the number of columns as the answer.