# 1. Contest Timing

* USACO 2011 November Contest, Bronze Division
* problem link: http://usaco.org/index.php?page=viewproblem2&cpid=84
* submission 1: passed all test data

## Solution Notes

* start time: november 11 2011 at exactly 11:11 AM
* given the date and time she stops working, compute total minutes spent on contest
* convert finish day and hour into minutes and add the finish minute to it
* from this finish time in minutes calculation, subtract the start time in minutes
* if the end - start time is less than 0, output -1. else output the difference.