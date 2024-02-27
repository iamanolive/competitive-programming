# Tournament

* past year ZCO resources page on CodeChef
* question appeared in ZCO 2013
* link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO13001

## Solution Notes 

* total participating teams = n
* total matches = (n * (n-1) / 2)
* there is a strength assigned to each team
* advertising revenue = abs(team1score - team2score)
* every team plays every other team that comes after it exactly once 
<br>
* find the difference between current element and every other element in the array, and add it into the total ad revenue.
* but this takes 400,00,000,000 operations in worst case, which would take a lot more than the allowed time limit.
<br>