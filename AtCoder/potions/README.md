# A. Potions

* problem A in AtCoder Beginner Contest 317
* solved not as part of contest, but for practice
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc317/tasks/abc317_a

## Solution Notes

* monster's current health = h
* potions 1 to n in ascending order of effectiveness
* h += potion[i]
* increase health to 1 or above with one potion
* number of least effective potion that can achieve the purpose
* print smallest number that is greater than or equal to (x - h)