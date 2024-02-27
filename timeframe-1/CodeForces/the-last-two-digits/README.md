# Y. The last 2 digits

* Problem Y from TLE Eliminators Level 1 (Sheet #1)
* Since we only want the last two digits of the multiplication of the four numbers anyway, we can delete all their digits except the last two (by storing the remainder obtained when dividing them by 100, using the modulo operator) to ensure that the product of all of them will fit in an int datatype.
* Then, we multiply them all with each other and again take the remainder by 100 so that the result only has a total of two digits.
* Since the problem specifically wants every result to have exactly two digits, we add a 0 to all numbers that are less than 10, because by default, the int datatype deletes all zeroes at the start of a number.