# A. Winter Sale

* Problem A from Assuit University Training Contest 1
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

## Solution Notes

* discount = x%
* price after discount = p
* find price before discount
* let price after discount = i, then:
* p = i - xi/100
* p = 100i/100 - xi/100
* p = 100i-xi / 100
* 100p = 100i - xi
* 100p = (100-x)*i
* 100p / 100-x = i
* rounded up to 2 decimal places -> use setprecision()