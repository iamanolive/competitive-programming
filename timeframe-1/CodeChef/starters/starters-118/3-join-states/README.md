# C. Join States

* problem C in the CodeChef Starters 118 (Division 4)
* rated 1043 on CodeChef
* problem link: https://www.codechef.com/problems/JOINSTATE

## Solution Notes

* given array A[N] denoting initial count of literate people in N states
* wants count in each state to be atleast M
* can combine two or more consecutive states to represent a new state
* new state literates = sum of literates in all combined states
* find max number of states that can be had while maintaining atleast M people are literate in each one