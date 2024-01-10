# Chef and Magical Jars

* CodeChef problem rating of 1502
* practice session of problems rated 1500 - 1600 (2 star advanced level) on CodeChef
* link to problem: https://www.codechef.com/problems/MAGICJAR

## Solution Notes

* x ingredient dish requires x jars
* N junior chefs
* A[N] featuring number of ingredients required for the dish
* if jars taken by chef < jars required, session failure
* else chefs who are done preparing (have jars >= required number of ingredients) returns jars to kitchen
* 'returned to kitchen' jars taken by chefs who haven't finished preparing their dish yet.
* continues until no remaining chef and cook dish or all chefs have cooked dish
* ends successfully when all chefs have cooked dish