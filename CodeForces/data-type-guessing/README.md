# H. Data Type Guessing

* Problem H from Assuit University Training Contest 1
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

## Solution Notes

* i need a double to calculate (n/a) because
    1. calculating n*k first could be, in the worst cases, too big for a long long to handle
    2. and dividing n/a could give a decimal value
* but in double datatypes, the 