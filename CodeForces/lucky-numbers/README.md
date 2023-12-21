# I. Lucky Numbers

* Problem I from Assuit University Training Contest 1
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

## Solution Notes

* input number, divide into two different digits
* digit1 = number % 10
* digit2 = number / 10
* if digit1 % digit2 == 0 or digit2 % digit1 == 0, print YES
* otherwise print NO