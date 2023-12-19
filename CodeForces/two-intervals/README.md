# X. Two Intervals

* Problem X from TLE Eliminators Level 1 (Sheet #1)
* There are a total of 4 possible conditions in which case the two lines have atleast one boundary point. These four conditions are:
    1. if l1 is between l2 and r2 or equal to one of them
    2. if r1 is between l2 and r2 or equal to one of them
    3. if l2 is between l1 and r1 or equal to one of them
    4. if r2 is between l1 and r1 or equal to one of them
* But the question clearly states that in each test case the only possible scenarios are that two either the boundaries have two points of intersection or no points of intersection. So in any given scenario, either two of the above four test cases have to be true or none of them have to be true.
* If any of the conditions are true, we print out the max of l1 and l2 (since l1 is always less than or equal to r1 and l2 is always less than or equal to r2) and the min of r1 and r2 as the answer.
* If none of the conditions are true, we print out -1