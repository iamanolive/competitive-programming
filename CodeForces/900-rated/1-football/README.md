## Solution Notes

* players current positions as string of 0 and 1
*  0 = (players of team A), 1 = (players of team B)
* if there are seven 0s without a 1 between them, or seven 1s without a single 0 between them, DANGEROUS
* determine if current situation is dangerous
* submission 1: wrong answer on test 3 (was technically a dumb mistake: accidentally reset counter to 0 instead of 1 when current element was not equal to previous element, thus excluding current element from count of consecutively-occurring similar elements)
* submission 2: accepted