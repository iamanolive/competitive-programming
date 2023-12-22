# Tournament


## Solution Notes 

* total participating teams = n
* total matches = (n * (n-1) / 2)
* there is a strength assigned to each team
* advertising revenue = abs(team1 - team2)
* every team plays every other team once 

- 3 10 3 5
- sort -> 3 3 10 5
- total matches == 6
- revenue = {0 + 7 + 2}, {7 + 2}, {5} = 23

* same as the variation question basically, need to figure out a method that has time complexity less than O(n squared)