# Video Game (ZCO 2014)

* past year ZCO resources page on CodeChef
* link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO14001

## Problem Notes

* 0 == quit
* 1 == move left
* 2 == move right
* 3 == pickup box
* 4 == drop box

## Implementing the Code

* if input command is 1 and the current position isn't the leftmost stack, then current position shifts one place to the left. but if we are currently at the leftmost stack, the current position remains the same.
* if input command is 2 and the current position isn't the rightmost stack, then the current position shifts one place to the right. if we are currently at the rightmost stack, the current position remains the same.
* if input command is 3 and the number of boxes in the current stack are greater than 0 and we  aren't already holding a box, then we pick up a box. if either the stack contains 0 boxes or we are already holding a box, then nothing changes.
* if the input command is 4 and the number of boxes in the current stack are strictly less than the maximum amount of boxes that a single stack is allowed to hold, and we ARE currently holding a box, then we drop the box onto the current stack.
* if the input command is 0, we quit the current test case.