# Smart Phone (ZCO 2014)

* past year ZCO resources page on CodeChef
* link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO14003

## Implementation in Code

* we take in an array and sort its elements in the increasing order. the smallest amount in this array can be payed by every single one of the potential customers. but the number of potential customers willing to pay the amount stored at a specific index in the array decreases by 1 as we move on to larger and larger elements (from 0 to greater indices)
* we declare an integer to store the max possible revenue that can be obtained by selling the phone at the current price (element that the for loop is currently pointing to * the total number of people willing to pay that amount)
* we also create another variable that stores the maximum possible amount that we can gain from selling the app.
* on each iteration of the array, if the current amount * people willing to pay that amount is greater than the current value of the variable holding the maximum possible revenue, then the max possible revenue variable is set to hold the value of the current amt * people willing to pay.
* this continues until we reach the end of the array (which is when the for loop stops iterating), and the variable holding the max possible revenue is printed out.