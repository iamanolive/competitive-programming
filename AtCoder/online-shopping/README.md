# A. Online Shopping

* problem A in AtCoder Beginner Contest 332
* solved not as part of contest, but for practice
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc332/tasks/abc332_a

## Problem notes and Logic

* total types of products to purchase = n
* price of each product from 1 to n = p of (1...n)
* quantity bought of each item from 1 to n = q of (1...n)
* if (total price >= s yen) shipping fee = 0
* else shipping fee = k yen

## Code implementation of the solution

* for each item, we first take in the input of price of the item, followed by quantity of that item
* we can store the price multiplied by quantity of all the n items in a sum variable
* and finally, after the price * quantity of all n items has been added into the sum, we can check whether sum is greater than or equal to s, in which case we print out the sum as it is, because the shipping fee will be 0
* but if the sum is less than s, we add k to it and print the result.