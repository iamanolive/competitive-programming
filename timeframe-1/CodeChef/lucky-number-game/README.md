# Lucky Number Game

* CodeChef practice session, rating of 1500
* problems rated 1500 - 1600 (2 star advanced level)
* link to problem: https://www.codechef.com/problems/HP18

## Solution Notes

* bob plays first
* each element removed must be a multiple of their individual lucky numbers
* bob's lucky number is a, alice's lucky number is b
* current player loses game if it is impossible to remove any elements

<br> <br>

* 1 2 3 4 5 {3, 2} : bob removes 3,
                     alice removes 2,
                     bob removes nothing
                     ALICE WINS
* 1 2 3 4 5 {2, 4} : bob removes 4,
                     alice removes nothing,
                     BOB WINS
