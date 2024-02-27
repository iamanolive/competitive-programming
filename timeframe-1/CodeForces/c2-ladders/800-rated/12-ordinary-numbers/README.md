# 12. Ordinary Numbers

* problem link:
* codeforces round problem B

## Solution Notes

* if n is a 1 digit number, result = n
* else if n is a 2 digit number, result = 9 + n/10 - 1 + int(if n is converted into an array and sorted, all the digits would be greater than or equal to n / 10) (or min(n/10, n%10))
* else if n is a 3 digit number, result = 18 + n/100 - 1 + int(if n is converted into an array and sorted, all the digits would be greater than or equal to n / 100)
* else if n is a 4 digit number, result = 27 + n / 1000 - 1 + int(if n is converted into an array and sorted, all the digits would be greater than or equal to n / 1000)
* {...}