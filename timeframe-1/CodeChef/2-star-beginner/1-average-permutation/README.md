# 1. Average Permutation

* rated 1401 on codechef
* tagged mathematics, problem in the 1400-1500 range (2 star beginner level)
* problem link: https://www.codechef.com/problems/AVGPERM

## Solution Notes

* moving from the edges of the permutation to the middle, the number of times current element is taken as part of a triplet increases by 1 the farther in we go
* we know that the greater a number, the greater the triplet sum will be when that number is added to it. so we want to minimize the number of times the biggest numbers appear in triplet sums and maximize the number of times the smaller numbers appear.
* to do this, we first print all the odd numbers in the permutation in decreasing order (such that the element decrease the further in we go) and follow that with all the even numbers printed in increasing order (so that the numbers increase as we reach the right edge)