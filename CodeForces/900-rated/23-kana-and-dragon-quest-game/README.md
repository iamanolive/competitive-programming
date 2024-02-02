# 23. Kana and Dragon Quest Game

* codeforces round 635 (div 2)
* problem link: https://codeforces.com/problemset/problem/1337/B
* submission 1: accepted

## Solution Notes

* dragon with hit point of X, defeated when hit point is less than or equal to 0
* void absorption { h = h/2 + 10 }
* lightning strike { h -= 10 }
* can cast a total of N void absorptions and M lightning strikes
* find if it is possible to defeat the dragon

* 17 {17/2 = 8 + 10 = 18}
* 18 {18/2 = 9 + 10 = 19}
* 19 {19/2 = 9 + 10 = 19}
* 20 {20/2 = 10 + 10 = 20}
* lightning strike can be performed on any X greater than 20
* 21 {21/2 = 10 + 10 = 20}
* 22 {22/2 = 11 + 10 = 21}
* 23 {23/2 = 11 + 10 = 21}
* 24 {24/2 = 12 + 10 = 22}

* 63 {63/2 + 10 = 41/2 + 10 = 30 - 10 = 20 - 10 = 10}
* 63 {63/2 + 10 = 41/2 + 10 = 30/2 + 10 = 25 - 10 = 15 - 10 = 5}
* 63 {63/2 + 10 = 31+10 = 41-10 = 31/2 + 10 = 25/2 + 10 = 22}

* 10 {10/2 + 10 = 15} +5 
* 11 {11/2 + 10 = 15} +4
* 20 {20/2 + 10 = 20} 0
* 21 {21/2 + 10 = 20} -1
* 30 {31/2 + 10 = 25} -6
* 31 {30/2 + 10 = 25} -5