# A. Tomorrow

* problem A in AtCoder Beginner Contest 331
* solved not as part of contest, but for practice
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc331/tasks/abc331_a

## Implementation of Code 

* the only two edge cases in the problem happen if
    1) the current month is the last month of the year and the current day is the last day of the month, essentially making the current day the last day of the current year. so the next day will be the first day of the NEXT year. year will be set to current year + 1 in the output, and the month and day will both be set to 1. 
    2) the current day is the last day of the current month (but current month is not the last month of the year). in this case, the current year will remain the same in output, but the current month will increase by one and the current day will be set to 1.
* in all other cases, we simply increment the current day by 1 in the output.
