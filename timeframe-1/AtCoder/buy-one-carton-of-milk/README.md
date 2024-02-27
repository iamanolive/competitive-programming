# B. Buy one Carton of Milk

* problem B from AtCoder Beginner Contest 331
* rated 200 on AtCoder
* solved as part of the 5-hr-long solve-as-many-200-rated-problems-as-you-can challenge
* link to problem: https://atcoder.jp/contests/abc331/tasks/abc331_b

## Solution Notes

* pack of 6 eggs = S
* pack of 8 eggs = M
* pack of 12 eggs = L
* min money to purchase ATLEAST N eggs
<br>

* what if i calculated the price (in double) of each egg in the 6, 8, and 12 egg packs seperately, and then subtracted the pack that had lowest-per-egg cost from N if and ONLY if N >= no. of eggs in that pack
* and continue doing this until number of eggs left were less than N, then subtract the pack that had min(remaining N, all packs) from N.